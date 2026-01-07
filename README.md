# Mini LED BTN Board

KiCad 9 project for an LED + Button board.  
Includes PCB and schematic files, as well as resources for testing and production.

## Repository Structure

### Folders

- `production/`: contains Gerber files, drill files, and everything needed to send the board to a PCB manufacturer.  
- `test/`: contains an Arduino sketch to test the board's functionality.

### KiCad Files

- `mini_led_button.kicad_pro` → main KiCad project file  
- `mini_led_button.kicad_sch` → schematic  
- `mini_led_button.kicad_pcb` → PCB layout  
- `mini_led_button.kicad_prl` → layer and print configuration  

## Usage

1. Open the `.kicad_pro` project in KiCad 9 to edit the schematic or PCB.  
2. Generate production files and save them in the `production/` folder.  
3. Upload the sketch from `test/` to an Arduino to verify the board functionality.

## Read More

For more details, see the related article: _coming soon..._
