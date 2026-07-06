package main
import "fmt"

main() {
	var input input
	sum := 0
	for sum <= 100 {
		fmt.Scan(&input)
		sum+= input
		fmt.Scan(&input)
	}
	fmt.Println("最终总合：",sum)
}