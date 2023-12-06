package calc

import (
	"fyne.io/fyne/v2"
	"log"
	"os"
)

func NewResourceIconPng() *fyne.StaticResource {
	data, err := os.ReadFile("/Users/shamil/Desktop/SmartCalc_v3.0-Desktop_Go/assets/icons/Icon.png")
	if err != nil {
		log.Fatal(err)
	}
	icon := fyne.NewStaticResource("Icon.png", data)
	return icon
}
