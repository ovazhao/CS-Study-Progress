package main
import "fmt"

func registerUser (username string, password string) (string,error){
	if username == ""{
		return "", fmt.Errorf(" the username cannot be empty.")
	}
	if len(password)<6{
		return "", fmt.Errorf(" the password must be at least 6 characters.")
	}
	return "Welcome, "+username,nil
}

func main(){
	msg,err := registerUser("alice","123456")
	if err != nil{
		fmt.Println("ERROR:", err)
	} else {
		fmt.Println(msg)
	}
}