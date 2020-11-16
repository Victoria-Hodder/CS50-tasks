#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Iterate through rows
    for (int i = 0; i < height; i++)
    {
        // Iterate through each pixel in rows
        for (int j = 0; j < width; j++)
        {
            // Calculate avg values
            int avgColor = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);

            // Set each color to avg value
            image[i][j].rgbtRed = avgColor;
            image[i][j].rgbtGreen = avgColor;
            image[i][j].rgbtBlue = avgColor;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Iterate through rows
    for (int i = 0; i < height; i++)
    {
        // Iterate through each pixel in rows
        for (int j = 0; j < width; j++)
        {

            // Convert colors to sepia with formula
            int sepiaRed = round(0.393 * image[i][j].rgbtRed + 0.769 * image[i][j].rgbtGreen + 0.189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(0.349 * image[i][j].rgbtRed + 0.686 * image[i][j].rgbtGreen + 0.168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(0.272 * image[i][j].rgbtRed + 0.534 * image[i][j].rgbtGreen + 0.131 * image[i][j].rgbtBlue);

            // Set cap to 255
            if (sepiaRed > 255 || sepiaGreen > 255 || sepiaBlue > 255)
            {
                sepiaRed = 255;
                sepiaGreen = 255;
                sepiaBlue = 255;
            }

            // Set each color to sepia value
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
