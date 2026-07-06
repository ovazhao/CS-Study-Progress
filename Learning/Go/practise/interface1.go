// This is a bank account system.
package main
import "fmt"

type BankAccount interface {
	GetBalance() float64
	Withdraw(amount float64) (string,error)
	GetHolderName() string
}

type AccountError struct {
	Code int
	Message string
}

func (ae AccountError) Error() string {
	return fmt.Sprintf("错误码<%d>: %s",ae.Code, ae.Message)
}

type NormalAccount struct {
	holderName string
	balance float64
}

func (na NormalAccount) GetBalance() float64 {
	return na.balance
}

func (na NormalAccount) Withdraw(amount float64) (string,error) {
	if amount > na.balance {
		return "", AccountError{
			Code: 1001, 
			Message: fmt.Sprintf("余额不足，当前余额：%.2f, 尝试取款：%.2f",na.balance,amount),
		}
	}
	if amount > 5000.0 {
		return "",AccountError{
			Code: 1002, 
			Message: fmt.Sprintf("普通账户单笔取款上限 5000，尝试取款%.2f", amount),
		}
	}
	return "扣除余额",nil
}

func (na NormalAccount) GetHolderName() string{
	return na.holderName
}

type VIPAccount struct {
	holderName string
	balance int
}

func (vipa VIPAccount) GetBalance() float64 {
	return float64(vipa.balance)
}

func (vipa VIPAccount) GetHolderName() string{
	return vipa.holderName
}

func (vipa VIPAccount) Withdraw(amount float64) (string, error) {
	bar := float64(vipa.balance) * 0.9
	if amount > 50000.0 {
		return "", AccountError{
			Code: 2002, 
			Message: fmt.Sprintf("VIP账户单笔取款上限 50000，尝试取款%.2f", amount),
		}
	}
	if amount > bar {
		return "", AccountError{
			Code: 2003, 
			Message: fmt.Sprintf("VIP账户单笔取款不能超过余额的90%%，当前余额：%d, 尝试取款：%.2f", vipa.balance, amount),
		}
	}
	if amount > float64(vipa.balance) {
		return "", AccountError{
			Code: 2001, 
			Message: fmt.Sprintf("余额不足，当前余额：%d, 尝试取款：%.2f", vipa.balance, amount),
		}
	}
	return "扣除余额", nil
}

func main() {
	normal := NormalAccount{holderName: "小明", balance: 10000}
	vip := VIPAccount{holderName:"小红", balance: 100000}

	accounts := []BankAccount{normal, vip}
	amounts := []float64{6000,4000,100000}

	for _,acc:= range accounts {
		for _, amt := range amounts {
			fmt.Printf("%s尝试取款% .2f:\n", acc.GetHolderName(), amt)
			_, withdrawerr := acc.Withdraw(amt)
			if withdrawerr != nil {
				fmt.Printf("%v\n",withdrawerr) 
			} else {
				fmt.Printf("%s 成功取款 %.2f, 余额： %.2f\n", acc.GetHolderName(), amt, acc.GetBalance())
			}
			fmt.Println("-------")
		}
		
	}
}