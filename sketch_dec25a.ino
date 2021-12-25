/*
 * ======
 * 輸出對照表
 * 1: HIGH 
 * 0: LOW
 * ======
 * const: 常數，不可被改變
 */

// Button => 按鈕
const int s1 = 3;
const int s2 = 4;
const int s3 = 5;
const int s4 = 6;
const int s5 = 7;
// LED => 燈泡
const int led1 = 14;
const int led2 = 15;
const int led3 = 16;
const int led4 = 17;
const int led5 = 18;
const int led6 = 19;
const int led7 = 20;
const int led8 = 21;
// 7 Seg Digit => 七段顯示器
const int a = 22;
const int b = 23;
const int c = 24;
const int d = 25;
const int e = 26;
const int f = 27;
const int g = 28;
const int dp = 29;

char i, j;
// LED Array => LED陣列
const int led_array[8] = {14, 15, 16, 17, 18, 19, 20, 21};
/* 
 * 第一題的LED發光矩陣 
 */
const int led_blink1_array[9][8] = 
{
    {1, 0, 0, 0, 0, 0, 0, 0},  
    {0, 1, 0, 0, 0, 0, 0, 0},  
    {0, 0, 1, 0, 0, 0, 0, 0},  
    {0, 0, 0, 1, 0, 0, 0, 0},  
    {0, 0, 0, 0, 1, 0, 0, 0},  
    {0, 0, 0, 0, 0, 1, 0, 0},  
    {0, 0, 0, 0, 0, 0, 1, 0},  
    {0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0}
};
/* 
 * 第二題的LED發光矩陣 
 */
const int led_blink2_array[8][8] = 
{
    {0, 0, 0, 0, 0, 0, 1, 1},  
    {0, 0, 0, 0, 0, 1, 1, 0},  
    {0, 0, 0, 0, 1, 1, 0, 0},  
    {0, 0, 0, 1, 1, 0, 0, 0},  
    {0, 0, 1, 1, 0, 0, 0, 0},  
    {0, 1, 1, 0, 0, 0, 0, 0},  
    {1, 1, 0, 0, 0, 0, 0, 0},  
    {0, 0, 0, 0, 0, 0, 0, 0}
};
/* 
 * 第三題的LED發光矩陣 
 */
const int led_blink3_array[9][8] = 
{
    {1, 0, 0, 0, 0, 0, 0, 0},  
    {1, 1, 0, 0, 0, 0, 0, 0},  
    {1, 1, 1, 0, 0, 0, 0, 0},  
    {1, 1, 1, 1, 0, 0, 0, 0},  
    {1, 1, 1, 1, 1, 0, 0, 0},  
    {1, 1, 1, 1, 1, 1, 0, 0},  
    {1, 1, 1, 1, 1, 1, 1, 0},  
    {1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0}
};
/* 
 * 第四題的LED發光矩陣 
 */
const int led_blink4_array[5][8] = 
{
    {1, 0, 0, 0, 0, 0, 0, 1},  
    {0, 1, 0, 0, 0, 0, 1, 0},  
    {0, 0, 1, 0, 0, 1, 0, 0},  
    {0, 0, 0, 1, 1, 0, 0, 0},  
    {0, 0, 0, 0, 0, 0, 0, 0}
};
/* 
 * 第五題的LED發光矩陣 
 */
const int led_blink5_array[16][8] = 
{
    {0, 0, 0, 0, 0, 0, 0, 1},  
    {0, 0, 0, 0, 0, 0, 1, 0},  
    {0, 0, 0, 0, 0, 1, 0, 0},  
    {0, 0, 0, 0, 1, 0, 0, 0},  
    {0, 0, 0, 1, 0, 0, 0, 0},  
    {0, 0, 1, 0, 0, 0, 0, 0},  
    {0, 1, 0, 0, 0, 0, 0, 0},  
    {1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},  
    {0, 0, 1, 0, 0, 0, 0, 0},  
    {0, 0, 0, 1, 0, 0, 0, 0},  
    {0, 0, 0, 0, 1, 0, 0, 0},  
    {0, 0, 0, 0, 0, 1, 0, 0},  
    {0, 0, 0, 0, 0, 0, 1, 0},  
    {0, 0, 0, 0, 0, 0, 0, 1},  
    {0, 0, 0, 0, 0, 0, 0, 0}
};

void setup()
{
    // Button
    // 上拉電阻，使用INPUT_PULLUP定義腳位
    pinMode(s1, INPUT_PULLUP);
    pinMode(s2, INPUT_PULLUP);
    pinMode(s3, INPUT_PULLUP);
    pinMode(s4, INPUT_PULLUP);
    pinMode(s5, INPUT_PULLUP);
    
    // LED Array 
    for(i=0;i<8;i++)
        pinMode(led_array[i], OUTPUT);
      
    // 7 Digit Seg
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(dp, OUTPUT);
}

void loop() {
    // 第一題
    for(i=0;i<9;i++) {
        for(j=0;j<8;j++) {
            digitalWrite(led_array[j], led_blink1_array[i][j]);
        }     
        delay(1000);
    }
    // 第二題
    for(i=0;i<8;i++) {
        for(j=0;j<8;j++) {
            digitalWrite(led_array[j], led_blink2_array[i][j]);
        }     
        delay(1000);
    }
    // 第三題
    for(i=0;i<9;i++) {
        for(j=0;j<8;j++) {
            digitalWrite(led_array[j], led_blink3_array[i][j]);
        }     
        delay(1000);
    }
    // 第四題
    for(i=0;i<5;i++) {
        for(j=0;j<8;j++) {
            digitalWrite(led_array[j], led_blink4_array[i][j]);
        }     
        delay(1000);
    }
    // 第五題
    for(i=0;i<16;i++) {
        for(j=0;j<8;j++) {
            digitalWrite(led_array[j], led_blink5_array[i][j]);
        }     
        delay(1000);
    }
}
