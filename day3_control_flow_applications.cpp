
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

// ========================================
// 1. COMPUTER VISION & MACHINE VISION
// ========================================

void computerVisionExamples() {
    std::cout << "========== COMPUTER VISION EXAMPLES ==========" << std::endl;
    
    // EXAMPLE 1: Image Processing - Pixel Classification
    std::cout << "\n--- Example 1: Pixel Classification ---" << std::endl;
    int pixelValue = 180;  // Grayscale value (0-255)
    
    // Using IF statements for thresholding
    if (pixelValue < 85) {
        std::cout << "Dark pixel - classified as BACKGROUND" << std::endl;
    } else if (pixelValue >= 85 && pixelValue < 170) {
        std::cout << "Medium pixel - classified as EDGE" << std::endl;
    } else {
        std::cout << "Bright pixel - classified as FOREGROUND" << std::endl;
    }
    
    // EXAMPLE 2: Object Detection - Processing Multiple Frames
    std::cout << "\n--- Example 2: Video Frame Processing (For Loop) ---" << std::endl;
    const int TOTAL_FRAMES = 5;
    int objectsDetected[5] = {2, 0, 3, 1, 2};  // Objects detected per frame
    
    int totalObjects = 0;
    for (int frame = 0; frame < TOTAL_FRAMES; frame++) {
        std::cout << "Frame " << frame << ": Detected " << objectsDetected[frame] << " objects" << std::endl;
        totalObjects += objectsDetected[frame];
    }
    std::cout << "Total objects across all frames: " << totalObjects << std::endl;
    
    // EXAMPLE 3: Face Detection States (Switch Statement)
    std::cout << "\n--- Example 3: Face Detection States ---" << std::endl;
    char detectionStatus = 'D';  // T=Tracking, D=Detected, L=Lost, N=None
    
    switch (detectionStatus) {
        case 'T':
            std::cout << "Status: TRACKING - Face is being tracked" << std::endl;
            break;
        case 'D':
            std::cout << "Status: DETECTED - New face found!" << std::endl;
            break;
        case 'L':
            std::cout << "Status: LOST - Re-scanning for face..." << std::endl;
            break;
        case 'N':
            std::cout << "Status: NONE - No face in frame" << std::endl;
            break;
        default:
            std::cout << "Status: UNKNOWN" << std::endl;
    }
    
    // EXAMPLE 4: Edge Detection Kernel Processing (Nested Loops)
    std::cout << "\n--- Example 4: 3x3 Kernel Processing ---" << std::endl;
    int image[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    
    std::cout << "Processing image pixels:" << std::endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            int processedValue = image[row][col] * 2;  // Simple operation
            std::cout << "Pixel[" << row << "][" << col << "] = " << processedValue << " ";
        }
        std::cout << std::endl;
    }
    
    // EXAMPLE 5: Camera Calibration Loop (While Loop)
    std::cout << "\n--- Example 5: Camera Calibration ---" << std::endl;
    double calibrationError = 5.0;  // Error in pixels
    const double TARGET_ERROR = 0.5;
    int calibrationAttempts = 0;
    
    while (calibrationError > TARGET_ERROR && calibrationAttempts < 10) {
        calibrationAttempts++;
        calibrationError -= 0.8;  // Simulate error reduction
        std::cout << "Attempt " << calibrationAttempts << ": Error = " << calibrationError << " pixels" << std::endl;
    }
    
    if (calibrationError <= TARGET_ERROR) {
        std::cout << "Camera calibrated successfully!" << std::endl;
    } else {
        std::cout << "Calibration failed - max attempts reached" << std::endl;
    }
}

// ========================================
// 2. GAME DEVELOPMENT
// ========================================

void gameDevelopmentExamples() {
    std::cout << "\n\n========== GAME DEVELOPMENT EXAMPLES ==========" << std::endl;
    
    // EXAMPLE 1: Player Health System (If Statements)
    std::cout << "\n--- Example 1: Health System ---" << std::endl;
    int playerHealth = 35;
    const int MAX_HEALTH = 100;
    (void)MAX_HEALTH;
    
    if (playerHealth <= 0) {
        std::cout << "GAME OVER - Player is dead!" << std::endl;
    } else if (playerHealth < 25) {
        std::cout << "CRITICAL - Health: " << playerHealth << "% (Screen flashing red)" << std::endl;
    } else if (playerHealth < 50) {
        std::cout << "WARNING - Health: " << playerHealth << "% (Find health pack!)" << std::endl;
    } else {
        std::cout << "HEALTHY - Health: " << playerHealth << "%" << std::endl;
    }
    
    // EXAMPLE 2: Enemy AI Behavior (Switch Statement)
    std::cout << "\n--- Example 2: Enemy AI States ---" << std::endl;
    std::string enemyState = "CHASE";  // IDLE, PATROL, CHASE, ATTACK, RETREAT
    
    if (enemyState == "IDLE") {
        std::cout << "Enemy: Standing still, looking around" << std::endl;
    } else if (enemyState == "PATROL") {
        std::cout << "Enemy: Walking patrol route" << std::endl;
    } else if (enemyState == "CHASE") {
        std::cout << "Enemy: Running towards player!" << std::endl;
    } else if (enemyState == "ATTACK") {
        std::cout << "Enemy: ATTACKING! Take cover!" << std::endl;
    } else if (enemyState == "RETREAT") {
        std::cout << "Enemy: Low health, retreating..." << std::endl;
    }
    
    // EXAMPLE 3: Inventory System (For Loop)
    std::cout << "\n--- Example 3: Inventory Display ---" << std::endl;
    std::string inventory[5] = {"Sword", "Shield", "Potion", "Key", "Map"};
    int inventoryCount = 5;
    
    std::cout << "=== PLAYER INVENTORY ===" << std::endl;
    for (int i = 0; i < inventoryCount; i++) {
        std::cout << (i + 1) << ". " << inventory[i] << std::endl;
    }
    
    // EXAMPLE 4: Game Loop (While Loop)
    std::cout << "\n--- Example 4: Simple Game Loop ---" << std::endl;
    int enemiesRemaining = 5;
    int playerAmmo = 8;
    int turn = 1;
    
    std::cout << "=== BATTLE START ===" << std::endl;
    while (enemiesRemaining > 0 && playerAmmo > 0) {
        std::cout << "Turn " << turn << ": Fire! (-1 ammo, -1 enemy)" << std::endl;
        playerAmmo--;
        enemiesRemaining--;
        turn++;
    }
    
    if (enemiesRemaining == 0) {
        std::cout << "VICTORY! All enemies defeated!" << std::endl;
    } else {
        std::cout << "OUT OF AMMO! Need to reload!" << std::endl;
    }
    
    // EXAMPLE 5: Damage Calculation (Nested Loops)
    std::cout << "\n--- Example 5: Area of Effect Damage ---" << std::endl;
    int grid[4][4] = {0};  // 4x4 game grid
    int explosionX = 1, explosionY = 1;
    int explosionRadius = 1;
    
    std::cout << "Explosion at [" << explosionX << "][" << explosionY << "]" << std::endl;
    for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 4; y++) {
            int distance = abs(x - explosionX) + abs(y - explosionY);
            if (distance <= explosionRadius) {
                grid[x][y] = 100 - (distance * 30);  // Damage decreases with distance
                std::cout << "[" << x << "][" << y << "] takes " << grid[x][y] << " damage" << std::endl;
            }
        }
    }
    
    // EXAMPLE 6: Level Progression (Switch)
    std::cout << "\n--- Example 6: Level Selection ---" << std::endl;
    int currentLevel = 3;
    
    switch (currentLevel) {
        case 1:
            std::cout << "Level 1: Tutorial Forest - Easy enemies" << std::endl;
            break;
        case 2:
            std::cout << "Level 2: Dark Cave - Medium difficulty" << std::endl;
            break;
        case 3:
            std::cout << "Level 3: Mountain Peak - Hard enemies" << std::endl;
            break;
        case 4:
            std::cout << "Level 4: Dragon's Lair - BOSS BATTLE!" << std::endl;
            break;
        default:
            std::cout << "Level " << currentLevel << ": Unknown area" << std::endl;
    }
}

// ========================================
// 3. WEB/MOBILE DEVELOPMENT
// ========================================

void webMobileDevelopmentExamples() {
    std::cout << "\n\n========== WEB/MOBILE DEVELOPMENT EXAMPLES ==========" << std::endl;
    
    // EXAMPLE 1: User Authentication (If Statements)
    std::cout << "\n--- Example 1: Login System ---" << std::endl;
    std::string username = "admin";
    std::string password = "pass123";
    bool isEmailVerified = true;
    
    if (username.empty() || password.empty()) {
        std::cout << "ERROR: Username and password required!" << std::endl;
    } else if (username == "admin" && password == "pass123") {
        if (isEmailVerified) {
            std::cout << "SUCCESS: Login successful! Redirecting to dashboard..." << std::endl;
        } else {
            std::cout << "WARNING: Please verify your email first" << std::endl;
        }
    } else {
        std::cout << "ERROR: Invalid credentials!" << std::endl;
    }
    
    // EXAMPLE 2: HTTP Response Codes (Switch Statement)
    std::cout << "\n--- Example 2: HTTP Status Handler ---" << std::endl;
    int statusCode = 404;
    
    switch (statusCode) {
        case 200:
            std::cout << "200 OK - Request successful" << std::endl;
            break;
        case 201:
            std::cout << "201 Created - Resource created successfully" << std::endl;
            break;
        case 400:
            std::cout << "400 Bad Request - Invalid input data" << std::endl;
            break;
        case 401:
            std::cout << "401 Unauthorized - Please login" << std::endl;
            break;
        case 404:
            std::cout << "404 Not Found - Page does not exist" << std::endl;
            break;
        case 500:
            std::cout << "500 Internal Server Error - Server problem" << std::endl;
            break;
        default:
            std::cout << statusCode << " - Unknown status code" << std::endl;
    }
    
    // EXAMPLE 3: Processing API Data (For Loop)
    std::cout << "\n--- Example 3: Displaying User Posts ---" << std::endl;
    std::string posts[4] = {
        "Welcome to my blog!",
        "Learning C++ is awesome",
        "Building my first app",
        "Thanks for 100 followers!"
    };
    int likes[4] = {45, 89, 120, 200};
    
    std::cout << "=== USER FEED ===" << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << "Post " << (i + 1) << ": \"" << posts[i] << "\" - " << likes[i] << " likes" << std::endl;
    }
    
    // EXAMPLE 4: Form Validation (While Loop)
    std::cout << "\n--- Example 4: Password Strength Checker ---" << std::endl;
    std::string userPassword = "weak";
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;
    bool isStrongPassword = false;
    
    while (!isStrongPassword && attempts < MAX_ATTEMPTS) {
        attempts++;
        std::cout << "Attempt " << attempts << ": Checking password..." << std::endl;
        
        if (userPassword.length() >= 8) {
            isStrongPassword = true;
            std::cout << "✓ Password is strong enough!" << std::endl;
        } else {
            std::cout << "✗ Password too weak (needs 8+ characters)" << std::endl;
            userPassword += "123";  // Simulate user adding characters
        }
    }
    
    // EXAMPLE 5: Shopping Cart Total (For Loop)
    std::cout << "\n--- Example 5: E-commerce Cart ---" << std::endl;
    double prices[5] = {19.99, 49.99, 9.99, 29.99, 99.99};
    int quantities[5] = {2, 1, 3, 1, 1};
    std::string items[5] = {"T-Shirt", "Shoes", "Socks", "Hat", "Jacket"};
    
    double total = 0.0;
    std::cout << "=== SHOPPING CART ===" << std::endl;
    for (int i = 0; i < 5; i++) {
        double itemTotal = prices[i] * quantities[i];
        total += itemTotal;
        std::cout << items[i] << " x" << quantities[i] << " = $" << itemTotal << std::endl;
    }
    std::cout << "-------------------" << std::endl;
    std::cout << "TOTAL: $" << total << std::endl;
    
    // EXAMPLE 6: User Role Permissions (Switch)
    std::cout << "\n--- Example 6: User Role System ---" << std::endl;
    std::string userRole = "moderator";
    
    if (userRole == "admin") {
        std::cout << "ADMIN: Full access - Can delete users, modify system" << std::endl;
    } else if (userRole == "moderator") {
        std::cout << "MODERATOR: Can delete posts, ban users" << std::endl;
    } else if (userRole == "user") {
        std::cout << "USER: Can post, comment, like" << std::endl;
    } else if (userRole == "guest") {
        std::cout << "GUEST: Read-only access" << std::endl;
    } else {
        std::cout << "UNKNOWN ROLE: No permissions" << std::endl;
    }
    
    // EXAMPLE 7: Database Pagination (For Loop)
    std::cout << "\n--- Example 7: Paginated Results ---" << std::endl;
    int totalRecords = 47;
    int recordsPerPage = 10;
    int totalPages = (totalRecords + recordsPerPage - 1) / recordsPerPage;  // Ceiling division
    
    std::cout << "Displaying " << totalRecords << " records:" << std::endl;
    for (int page = 1; page <= totalPages; page++) {
        int recordsOnPage = (page == totalPages) ? (totalRecords % recordsPerPage) : recordsPerPage;
        if (recordsOnPage == 0) recordsOnPage = recordsPerPage;
        std::cout << "Page " << page << ": Showing " << recordsOnPage << " records" << std::endl;
    }
    
    // EXAMPLE 8: Loading Screen (While Loop)
    std::cout << "\n--- Example 8: App Loading Simulation ---" << std::endl;
    int loadingProgress = 0;
    
    std::cout << "Loading app resources..." << std::endl;
    while (loadingProgress < 100) {
        loadingProgress += 25;  // Simulate loading chunks
        std::cout << "Progress: " << loadingProgress << "% ";
        
        if (loadingProgress >= 100) {
            std::cout << "- COMPLETE!" << std::endl;
        } else {
            std::cout << "- Loading..." << std::endl;
        }
    }
}

// ========================================
// MAIN FUNCTION
// ========================================

int main() {
    std::cout << "╔════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║  CONTROL FLOW IN REAL-WORLD APPLICATIONS              ║" << std::endl;
    std::cout << "║  if/switch statements + for/while loops                ║" << std::endl;
    std::cout << "╚════════════════════════════════════════════════════════╝" << std::endl;
    
    // Run all examples
    computerVisionExamples();
    gameDevelopmentExamples();
    webMobileDevelopmentExamples();
    
    std::cout << "\n\n╔════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║  KEY TAKEAWAYS:                                        ║" << std::endl;
    std::cout << "║                                                        ║" << std::endl;
    std::cout << "║  IF/ELSE: Use when you need flexible conditions       ║" << std::endl;
    std::cout << "║  SWITCH: Use for checking one variable's exact value  ║" << std::endl;
    std::cout << "║  FOR: Use when you know the number of iterations      ║" << std::endl;
    std::cout << "║  WHILE: Use when the number of iterations is unknown  ║" << std::endl;
    std::cout << "╚════════════════════════════════════════════════════════╝" << std::endl;
    
    return 0;
}
