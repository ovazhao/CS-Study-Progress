package main
import "fmt"

func concat(a string, b string) string {
	return a+" to "+ b
}
func main(){
	sender := "Syl"
	recipient := "Lane"
	var message = fmt.Sprintf("The words, %s. You have to speak the words!",recipient) 
	fmt.Printf(concat(sender, recipient)+": %s",message)

}
