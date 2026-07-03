package main
import "fmt"

func readAgeFromFile (filename string) (int,error) {
	if filename == "" {
		return 0,fmt.Errorf("filename cannot be empty.")
	} 
	if filename == "notfound.txt"{
		return 0,fmt.Errorf("file not found: %s",filename)
	} 
	if filename == "badformat.txt"{
		return 0,fmt.Errorf("invalid age format in file")
	} 
	if filename == "user.txt"{
		return 25,nil
	} 
	if filename =="child.txt"{
		return 13,nil
	}
	return 0, fmt.Errorf("unknown file: %s", filename)
}

func isAdult(filename string) (bool, error){
	age,err := readAgeFromFile(filename)
	if err != nil {
		return false,err
	} else {
		if age< 18 {
			return false, nil
		} else {
			return true, nil
		}
	}
}

func main(){
	files := []string{
		"user.txt",
		"",
		"notfound.txt",
		"badformat.txt",
		"user.txt",
		"child.txt",
	}
	for _, file := range files {
		adult, err := isAdult(file)
		if err != nil{
			fmt.Printf("检查 %s 时出错：%v\n",file,err)
			continue
		} 	
		if adult {
			fmt.Printf("%s: 已成年\n", file)
		} else {
			fmt.Printf("%s: 未成年\n", file)
		}
	}
	
}