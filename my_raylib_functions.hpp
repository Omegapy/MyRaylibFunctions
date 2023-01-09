/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*-------------------------------*****************************************----------------------------------
 |                                *                                      *                                 |
 |                                *		   My Raylib Functions           *                                 |
 |                                *                                      *                                 |
 ---------------------------------****************************************----------------------------------*/
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Alejandro Ricciardi (Omegapy)
created date: 01/09/2023


                                               My Raylib Functions

Standalone header
My Raylib Functions is a collection of my personal c++ and raylib functions.


Requirement
c and c++ 20 or later
MS Windows 10 or later
MS. Visual Studio
Raylib library: https://www.raylib.com

****** Please see the README.txt file for more information about this project **********

My links:
https://github.com/Omegapy
https://www.youtube.com/@omegapy
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*--------------------------------------------------------------------

    Pauses the screen, the game

 --------------------------------------------------------------------*/
void pause_screen(int pause_key)
{
    //----------------------------------------------------

    // Function operations
    //-----------------------------------------------------
    if (IsKeyPressed(pause_key))
    {
        //----------------------------------------------------

        // Variables
        //-----------------------------------------------------
        const char *text = "The Game is paussed";
        int text_width = MeasureText(text, 60);

        // Initializes the pressed key
        BeginDrawing();
        EndDrawing();

        // True until the pause is pressed again
        while (true)
        {
            // Pause message
            BeginDrawing();
            ClearBackground(BLACK);
            DrawText(text, GetScreenWidth() / 2 - text_width / 2, GetScreenHeight() / 2 - 30, 60, YELLOW);
            EndDrawing();

            if (IsKeyPressed(pause_key)) break; // exits while loop and function   
        }
    }
}
