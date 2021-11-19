include "helpers.h"
#include<math.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            RGBTRIPLE pixel = image[i][j];
            int avg = round((pixel.rgbtBlue+pixel.rgbtGreen+pixel.rgbtRed)/3.0);
             image[i][j].rgbtRed=image[i][j].rgbtGreen=image[i][j].rgbtBlue=avg;
        }


    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            RGBTRIPLE pixel = image[i][j];
           int sepiaRed =round( .393 * pixel.rgbtRed + .769 *pixel.rgbtGreen  + .189 * pixel.rgbtBlue);
           int sepiaGreen = round(.349 * pixel.rgbtRed + .686 * pixel.rgbtGreen + .168 * pixel.rgbtBlue);
           int sepiaBlue = round(.272 * pixel.rgbtRed + .534 * pixel.rgbtGreen + .131 * pixel.rgbtBlue);

           if(sepiaRed>255)image[i][j].rgbtRed=255;
           else image[i][j].rgbtRed=sepiaRed;
           if(sepiaGreen>255)image[i][j].rgbtGreen=255;
           else image[i][j].rgbtGreen=sepiaGreen;
           if(sepiaBlue>255)image[i][j].rgbtBlue=255;
           else image[i][j].rgbtBlue=sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    for(int i=0;i<height;i++)
    {
        int curpos=0;
        for(int j=width-1;j>=0;j--,curpos++)
        {
            temp[i][curpos]=image[i][j];
        }
    }

    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            image[i][j]=temp[i][j];
        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{    RGBTRIPLE temp[height][width];

    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            int count=0;
            int rowcords[]={row-1,row,row+1};
            int colcords[]={col-1,col,col+1};
            float totalR=totalG=totalB=0;
            for(int r=0;r<3;r++)
            {
                for(int c=0;c<3;c++)
                {
                    int curRow=rowcords[r];
                    int curCol=rowcords[c];

                    if(curRow>=0 && curRow<height && curCol>=0 && curCol<width)
                    {
                        RGBTRIPLE pixel= image[curRow][curCol];
                        totalR +=image[i][j].rgbtRed;
                        totalG += image[i][j].rgbtGreen;
                        totalB += image[i][j].rgbtBlue;
                        count++;
                    }
                }
            }

        image[i][j].rgbtRed=round(totalR/count);
        image[i][j].rgbtGreen = round(totalG/count);
        image[i][j].rgbtBlue=round(totalB/count);
        }
    }


    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
    return;
}
