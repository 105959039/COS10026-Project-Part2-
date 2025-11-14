<?php
// menu.inc - PHP include file for navigation menu
?>
<!-- Navigation Menu -->
<nav class="top-nav">
    <div class="nav-buttons">
        <a href="./index.php" class="nav-btn <?php echo basename($_SERVER['PHP_SELF']) == 'index.php' ? 'active' : ''; ?>">
            <i class="fas fa-home"></i> Home
        </a>
        <a href="./jobs.php" class="nav-btn <?php echo basename($_SERVER['PHP_SELF']) == 'jobs.php' ? 'active' : ''; ?>">
            <i class="fas fa-briefcase"></i> Job Description
        </a>
        <a href="./apply.php" class="nav-btn <?php echo basename($_SERVER['PHP_SELF']) == 'apply.php' ? 'active' : ''; ?>">
            <i class="fas fa-file-alt"></i> Job Application
        </a>
        <a href="./about.php" class="nav-btn <?php echo basename($_SERVER['PHP_SELF']) == 'about.php' ? 'active' : ''; ?>">
            <i class="fas fa-info-circle"></i> About
        </a>
    </div>
</nav>

<style>
    /* Menu-specific styles */
    .top-nav {
        display: flex;
        justify-content: center;
        align-items: center;
        padding: 0 5%;
        height: 60px;
        background: linear-gradient(135deg, #2c3e50 0%, #3498db 100%);
        width: 100%;
    }
    
    .nav-buttons {
        display: flex;
        gap: 5px;
    }
    
    .nav-btn {
        background: rgba(255, 255, 255, 0.15);
        color: white;
        border: none;
        padding: 8px 16px;
        border-radius: 20px;
        font-weight: 500;
        cursor: pointer;
        transition: all 0.3s ease;
        text-decoration: none;
        display: inline-flex;
        align-items: center;
        gap: 8px;
    }
    
    .nav-btn:hover {
        background: rgba(255, 255, 255, 0.3);
        transform: translateY(-2px);
    }
    
    .nav-btn.active {
        background: rgba(255, 255, 255, 0.25);
        box-shadow: 0 0 10px rgba(255, 255, 255, 0.2);
    }

    /* Responsive menu styles */
    @media (max-width: 768px) {
        .top-nav {
            flex-direction: column;
            height: auto;
            padding: 10px 5%;
            gap: 10px;
        }
        
        .nav-buttons {
            flex-wrap: wrap;
            justify-content: center;
        }
        
        .nav-btn {
            padding: 6px 12px;
            font-size: 0.9rem;
        }
    }
    
    @media (max-width: 480px) {
        .nav-btn {
            padding: 5px 10px;
            font-size: 0.8rem;
        }
        
        .nav-btn i {
            font-size: 0.9rem;
        }
    }
</style>