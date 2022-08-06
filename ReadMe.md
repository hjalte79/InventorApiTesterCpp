# Prologue
Simple C++ apllication that I use for testing the Inventor API.

# Using the app
## Inventor 2023
The app is created for Inventor 2023. Therefore all include directories point to Inventor 2023 directories. 
If you want to use this app for othere inventor versions you need to change the included directories. This how you can do that (in Visual Studio 2019) 
 - In the solution explorer select the project "InventorApiTesterCpp" (not the solution) 
 - Right click and select "Properties" (alt+enter)
 - Select "Configuration Properies" -> "VC++ directories" 
 - Select "General" -> "Included Directories"
 - This is a ; seperated list. In this list there are refrences to Inventor 2023 directoies. Change them to you needs.

## Ilogic looks
The setup is like an iLogic rule. (That is where i'm familiar with) All you code can live in the ThisRule class. 
The function "Main()" is called when the tool is started. 
Within the class the Inventor object is pressent in the property "ThisApplication" (this is set automaticaly when the tool is started.)

## Shout out 
to "Owen Ransen" [http://www.ransensoftware.com]((http://www.ransensoftware.com)) for his "Inventor Programming in C++" resource.
 
 
	