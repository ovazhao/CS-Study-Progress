package main
import (
	"fmt"
)

func main() {
	var stockcode=123
	var enddate="2026-04-01"
	var style= fmt.Sprintf("the stockcode is %d, the enddate is %s",stockcode,enddate)
	fmt.Println(style)
}