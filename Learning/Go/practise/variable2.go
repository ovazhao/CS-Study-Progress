package main
import(
	"fmt"
)
func main() {
	var var_1, var_2 int
	var_1=123
	var_2=456
	var style= fmt.Sprintf("the first variable is %d, and the second variable is %d",var_1,var_2)
	fmt.Println(style)
}