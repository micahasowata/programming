/*
This implements FizzBuzz over 1 to 100
*/
package main

import "fmt"

const (
	FIZZ = 3
	BUZZ = 5
)

func main() {
	for i := range 100 {
		if i == 0 {
			continue
		}

		switch {
		case i%FIZZ == 0 && i%BUZZ == 0:
			fmt.Println("FizzBuzz")
		case i%FIZZ == 0:
			fmt.Println("Fizz")
		case i%BUZZ == 0:
			fmt.Println("Buzz")
		default:
			fmt.Println(i)
		}
	}
}
