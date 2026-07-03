package main
import "fmt"

type OrderError struct {
	Code int
	Message string
}

func (oe OrderError) Error() string {
	return fmt.Sprintf("错误码 <%v>: %v", oe.Code, oe.Message)
}

func processOrder(itemID string, quantity int, balance float64) (string, error) {
	if itemID == "DISCONTINUED" {
		return "", OrderError{Code: 404, Message: "商品已下架"}
	} 
	if quantity > 10 {
		return "", OrderError{Code: 400, Message: "库存不足，最大可购买10件"}
	}
	if balance < float64(quantity) * 9.99 {
		needed := float64(quantity) * 9.99
		return "", OrderError{Code: 402, Message: fmt.Sprintf("余额不足，需要 %.2f",needed)}
	}
	return fmt.Sprintf("订单确认！商品：%s 数量：%d", itemID,quantity),nil
}

func main() {
	testCases := []struct {
		itemID   string
		quantity int
		balance  float64
	}{
		{"DISCONTINUED", 1, 100.0},
		{"ITEM001", 20, 100.0},
		{"ITEM001", 5, 10.0},
		{"ITEM001", 3, 50.0},
	}
	for _, tc := range testCases{
		fmt.Printf("处理订单：商品=%s，数量=%d，余额=%.2f\n", tc.itemID,tc.quantity,tc.balance)
		msg,err := processOrder(tc.itemID,tc.quantity,tc.balance)
		if err == nil {
			fmt.Printf("成功：%s\n",msg)
		} else {
			fmt.Printf("订单错误：%v\n",err)
		}
		fmt.Println("----------")
	}
}