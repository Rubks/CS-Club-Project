#include "raylib.h"

int main() {
    
   int screenHeight = 640;
   int screenWidth = 480;
   
   Vector2 RecPos = new Vector2 (128, 128);
   Vector2 RecSize = new Vector2 (16, 16);
   
   SpriteFont GetDefaultFont();
   
    InitWindow(screenHeight, screenWidth, "Test for the CS club");
    
    SetTargetFPS(60);
   
    while(!WindowShouldClose()) {
        
        if(IsKeyDown(KEY_A)) {RecPos.x -= 1.0f}
        
        BeginDrawing();
        
        DrawFPS(16, 16);
        ClearBackground(RAYWHITE);
        
        DrawRectangleV(RecPos, RecSize, RED);
        
        DrawText("Health", 16, 32, 20, BLACK);
        DrawText("Armor", 16, 48, 20, BLACK);
        DrawText("Stamina", 16, 64, 20, BLACK);
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
}