package main

import "fmt"

func prefix(text string) string {
	return text + "."
}

func reformat(message string, formatter func(string) string) string {
	adjustmessage :=formatter(message)
	adjustmessage =formatter(adjustmessage)
	return "TEXTIO: "+ adjustmessage

}

func main() {
	inputtext:="I don't know"
	result:=reformat(inputtext, prefix)
	fmt.Println(result)
}