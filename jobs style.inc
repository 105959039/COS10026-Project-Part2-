<?php
// style.inc - CSS styles for jobs page
?>
<style>
    /* Main Content Styles Only */
    .container {
        max-width: 1200px;
        margin: 0 auto;
        padding: 20px;
    }
    
    .content-wrapper {
        display: flex;
        gap: 30px;
    }
    
    .main-content {
        flex: 3;
        width: 75%;
        min-width: 300px;
    }
    
    .aside-container {
        flex: 1;
        width: 25%;
        min-width: 25%;
        max-width: 25%;
    }
    
    section {
        background: white;
        padding: 30px;
        margin-bottom: 30px;
        border-radius: 12px;
        box-shadow: 0 5px 15px rgba(0, 0, 0, 0.08);
        transition: transform 0.3s ease;
    }
    
    section:hover {
        transform: translateY(-5px);
    }
    
    aside {
        background: linear-gradient(to bottom, #4a6491, #2c3e50);
        color: white;
        padding: 25px;
        border-radius: 12px;
        box-shadow: 0 5px 15px rgba(0, 0, 0, 0.1);
        border: 3px solid #3498db;
        position: sticky;
        top: 100px;
    }
    
    aside h3 {
        color: #fff;
        border-bottom: 2px solid rgba(255, 255, 255, 0.3);
        padding-bottom: 10px;
        margin-bottom: 20px;
    }
    
    aside ul {
        list-style-type: none;
        margin-left: 0;
    }
    
    aside li {
        margin-bottom: 12px;
        padding-left: 25px;
        position: relative;
    }
    
    aside li:before {
        content: "•";
        color: #3498db;
        font-weight: bold;
        position: absolute;
        left: 0;
        font-size: 20px;
    }
    
    h2 {
        margin-bottom: 20px;
        padding-bottom: 10px;
        border-bottom: 3px solid #3498db;
        font-size: 1.8rem;
    }
    
    h3 {
        margin: 20px 0 15px;
        color: #3498db;
        font-size: 1.4rem;
    }
    
    h4 {
        margin: 20px 0 12px;
        color: #2c3e50;
        font-size: 1.2rem;
    }
    
    .decorative-bar {
        height: 6px;
        background: linear-gradient(to right, #6a11cb, #2575fc, #2c3e50);
        border-radius: 3px;
        margin: 15px 0 25px;
    }
    
    .highlight {
        background: linear-gradient(120deg, rgba(106, 17, 203, 0.1), rgba(37, 117, 252, 0.1));
        padding: 15px;
        border-radius: 8px;
        border-left: 4px solid #6a11cb;
    }
    
    .job-count {
        text-align: center;
        margin-bottom: 20px;
        font-size: 1.1rem;
        color: #2c3e50;
        background: white;
        padding: 15px;
        border-radius: 8px;
        box-shadow: 0 2px 5px rgba(0,0,0,0.1);
    }
    
    @media (max-width: 992px) {
        .content-wrapper {
            flex-direction: column;
        }
        
        .main-content,
        .aside-container {
            width: 100%;
            flex: 0 0 100%;
            max-width: 100%;
        }
        
        aside {
            position: relative;
            top: 0;
        }
    }
    
    @media (max-width: 768px) {
        section, aside {
            padding: 20px;
        }
    }
    
    @media (max-width: 480px) {
        section, aside {
            padding: 18px;
            margin: 15px 0;
        }
    }
</style>