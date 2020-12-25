package main

import "fmt"
import "log"

func main() {
  var message = "Привет, κόσμος!"
  if message[0] != 0xD0 && message[1] != 0x9F {
    log.Fatal("wrong encoding")
  }
  fmt.Println(message)
}
