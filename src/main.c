#include "raylib.h"

// Ekran boyutlar�
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define SCREEN_TITLE "Top Patlatma Oyunu"

// Oyun durumu i�in yap�
typedef struct {
    int score;
    bool gameOver;
    // Daha sonra eklenecek di�er oyun de�i�kenleri
} GameState;

// Oyunun ba�lang�� ayarlar�n� yap�land�rma fonksiyonu
void InitializeGame(GameState* gameState) {
    // Oyun ba�lang�� de�erlerini ayarlama
    gameState->score = 0;
    gameState->gameOver = false;
}

// Oyun g�ncellemelerini yapan fonksiyon
void UpdateGame(GameState* gameState) {
    // Oyunun her karesinde yap�lacak g�ncellemeler
    // �rne�in: input kontrol�, top hareketleri vb.

    // �imdilik bo�, daha sonra detayland�r�lacak
}

// Oyunu �izen fonksiyon
void DrawGame(GameState* gameState) {
    BeginDrawing();

    // Arka plan� temizle
    ClearBackground(RAYWHITE);

    // Oyun durumunu ekrana yazd�r
    DrawText(TextFormat("Skor: %d", gameState->score), 10, 10, 20, BLACK);

    EndDrawing();
}

int main() {
    // Raylib penceresini ba�lat
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_TITLE);

    // FPS ayar� (saniyede 60 kare)
    SetTargetFPS(60);

    // Oyun durumu yap�s�n� olu�tur
    GameState gameState;

    // Oyunu ba�lat
    InitializeGame(&gameState);

    // Ana oyun d�ng�s�
    while (!WindowShouldClose() && !gameState.gameOver) {
        // Oyunu g�ncelle
        UpdateGame(&gameState);

        // Oyunu �iz
        DrawGame(&gameState);
    }

    // Pencereyi kapat
    CloseWindow();

    return 0;
}