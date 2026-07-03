package main
import "fmt"
func addition(a int,b int) int{
	return a+b
}
func substitution(a int,b int) int{
	return a-b
}
func multiplication(a int,b int) int{
	return a*b
}
func nil()

func chooseOperation(op string) func(int, int) int {
	Objectfuntion := nil
	if op == "add" {
		Objectfuntion = addition
	}
	if op == "sub"{
		Objection = substitution
	}
	if op == "mul"{
		Objectfuntion =multiplication
	}

	return Objectfuntion
}

func main() {
	result := Objectfuntion("add")
	fmt.Println()
}