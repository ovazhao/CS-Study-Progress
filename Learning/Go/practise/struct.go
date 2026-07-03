package main
import "fmt"
type book struct{
	title string
	author string
	pages int
}

var samplebook = book{
	title : "go programming",
	author : "John Doe",
	pages : 300,
}

func main(){
	sampletitle :=fmt.Sprintf("The title of the book is %s", samplebook.title)
	fmt.Println(sampletitle)
}