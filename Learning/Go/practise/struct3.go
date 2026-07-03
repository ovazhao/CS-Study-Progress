package main
import "fmt"

type address struct {
	city string
	street string
}

type person struct{
	name string
	age int
	address
}

var person1 = person{
	name : "xiaoming",
	age : 20,
	address : address{
		city : "shenzhen",
		street : "keji road",
	},

}
fmt.Printf("The name of the place is : %s", person1.city)