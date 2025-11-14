<?php
// header.inc - PHP include file for header
?>

<!-- Font Awesome Icons -->
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">

<style>
    * {
      box-sizing: border-box;
      margin: 0;
      padding: 0;
    }
    
    body {
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      margin: 0;
      background: linear-gradient(to bottom, #f8f9fa, #e9ecef);
      color: #2c3e50;
      line-height: 1.6;
      padding-top: 160px;
    }
    
    .main-header {
      position: fixed;
      top: 0;
      left: 0;
      width: 100%;
      background: linear-gradient(135deg, #2c3e50 0%, #3498db 100%);
      color: white;
      z-index: 1000;
      box-shadow: 0 4px 12px rgba(0, 0, 0, 0.15);
      height: 160px;
    }
    
    .header-content {
      display: flex;
      justify-content: space-between;
      align-items: center;
      padding: 30px 5%;
      height: 100px;
    }
    
    .logo-container {
      display: flex;
      align-items: center;
      gap: 15px;
    }
    
    .header-logo {
      height: 80px;
      width: auto;
    }
    
    .header-center {
      text-align: center;
      flex: 1;
      padding: 0 20px;
    }
    
    .header-center h1 {
      font-size: 2.2rem;
      margin-bottom: 8px;
      font-weight: 700;
    }
    
    .header-center p {
      font-size: 1.2rem;
      opacity: 0.9;
    }
    
    .apply-button {
      background: linear-gradient(to right, #ff7e5f, #feb47b);
      color: white;
      border: none;
      padding: 12px 25px;
      border-radius: 30px;
      font-weight: bold;
      cursor: pointer;
      transition: all 0.3s ease;
      box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
      text-decoration: none;
      display: inline-block;
      font-size: 1rem;
    }
    
    .apply-button:hover {
      transform: translateY(-3px);
      box-shadow: 0 6px 12px rgba(0, 0, 0, 0.25);
      background: linear-gradient(to right, #7bfe91, #5fff7c);
    }
    
    @media (max-width: 768px) {
      body { padding-top: 180px; }
      .main-header { height: 180px; }
      .header-content {
        flex-direction: column;
        text-align: center;
        gap: 15px;
        padding: 25px 5%;
        height: auto;
      }
      .header-center { order: -1; width: 100%; }
      .header-center h1 { font-size: 1.8rem; }
      .header-center p { font-size: 1.1rem; }
      .header-logo { height: 50px; }
      .apply-button {
        width: 100%;
        max-width: 250px;
        margin-top: 10px;
      }
    }
    
    @media (max-width: 480px) {
      body { padding-top: 200px; }
      .main-header { height: 200px; }
      .header-center h1 { font-size: 1.6rem; }
      .header-center p { font-size: 1rem; }
      .header-logo { height: 45px; }
      .apply-button {
        padding: 10px 20px;
        font-size: 0.9rem;
      }
    }
</style>

<header class="main-header">
    <div class="header-content">
        <div class="logo-container">
            <img src="QAE logo.png" alt="QuantumAxis Engineering Logo" class="header-logo">
        </div>
        <div class="header-center">
            <h1>QuantumAxis Engineering</h1>
            <p>Career Opportunities</p>
        </div>
        <a href="./apply.php" class="apply-button">Apply Now</a>
    </div>
</header>