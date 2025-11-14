<!-- header.inc -->
<style>
    /* Header Styles */
    header {
      background: linear-gradient(135deg, #2c3e50 0%, #3498db 100%);
      color: white;
      padding: 20px 5%;
      box-shadow: 0 4px 12px rgba(0, 0, 0, 0.15);
      position: relative;
    }
    
    .logo-container {
      display: flex;
      justify-content: center;
      align-items: center;
      margin-bottom: 10px;
    }

    .logo {
       width: 120px;
       height: auto;
    }
    
    .logo-text {
      font-size: 18px;
      font-weight: bold;
      color: #2c3e50;
      text-align: center;
    }
    
    /* Navigation */
    nav {
      display: flex;
      justify-content: center;
      flex-wrap: wrap;
      gap: 15px;
      margin-top: 15px;
    }
    
    nav a {
      color: white;
      text-decoration: none;
      padding: 10px 20px;
      border-radius: 30px;
      background: rgba(255, 255, 255, 0.1);
      transition: all 0.3s ease;
      font-weight: 500;
    }
    
    nav a:hover {
      background: rgba(255, 255, 255, 0.2);
      transform: translateY(-2px);
    }
</style>
<header>
  <div class="logo-container">
    <img src="QAElogo.png" alt="QuantumAxis Logo" class="logo">
  </div>

  <nav>
    <a href="./index.php">Home</a>
    <a href="./jobs.php">Job Description</a>
    <a href="./apply.php">Job Application</a>
    <a href="./about.php">About</a>
  </nav>
</header>
