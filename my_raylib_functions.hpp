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

//--------------------------------------------------------------------- Function pause_screen()
/*-------------------------------------------------

    Pauses the screen, the game

 --------------------------------------------------*/
void pause_screen(int pause_key)
{
    //-----------------------------------------------------

    // Function operations
    //-----------------------------------------------------
    if (IsKeyPressed(pause_key))
    {
        //-----------------------------------------------------

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

            // Exits Programm
            if (WindowShouldClose())
            {
                CloseWindow();
                exit(0);
            }

            else if (IsKeyPressed(pause_key)) break; // exits while loop and function    
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//--------------------------------------------------------------------- Function center_window()
/*----------------------------------------------------

    Centers window in current monitor

 -----------------------------------------------------*/
void center_window(float window_width, float window_height)
{
    int monitor = GetCurrentMonitor();// Get current connected monitor
    int monitor_width = GetMonitorWidth(monitor); // Get specified monitor width (current video mode used by monitor)
    int monitor_height = GetMonitorHeight(monitor); // Get specified monitor height (current video mode used by monitor)
    SetWindowPosition((int)(monitor_width / 2) - (int)(window_width / 2), (int)(monitor_height / 2) - (int)(window_height / 2));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//--------------------------------------------------------------------- Function draw_doted_line()
/*---------------------------------------------------

    Draws a dotted line

 ----------------------------------------------------*/
void Instance::draw_dotted_line(int start_pos_x, int start_pos_y, int end_pos_x, int end_pos_y, int num_points)
{
    //-----------------------------------------------------

    // Variable
    //-----------------------------------------------------
    // Lenght of the line relative to the x and y axis
    double change_x = (end_pos_x - start_pos_x);
    double change_y = (end_pos_y - start_pos_y);
    // Points position
    int point_x = start_pos_x;
    int point_y = start_pos_y;

    //-----------------------------------------------------

    // Function operations
    //-----------------------------------------------------
    // Draw the line using points
    for (int i = 0; i < num_points + 1; i++)
    {
        DrawPixel(point_x, point_y, WHITE);
        point_x += (int)(change_x / num_points);
        point_y += (int)(change_y / num_points);
    }
}