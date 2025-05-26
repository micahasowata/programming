package main

import "fmt"

func main() {
	s := "hello"
	sr := []rune(s)
	sr[0] = 'c'
	s = string(sr)

	fmt.Println(s)
}
