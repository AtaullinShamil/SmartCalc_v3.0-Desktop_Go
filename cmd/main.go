package main

import (
	"fyne.io/fyne/v2/app"
	"github.com/AtaullinShamil/SmartCalc_v3.0-Desktop_Go/pkg/calc"
)

func main() {
	app := app.New()
	app.SetIcon(calc.NewResourceIconPng())

	c := calc.NewCalculator()
	c.LoadUI(app)
	app.Run()
}
