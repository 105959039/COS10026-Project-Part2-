<style>
    * {
      box-sizing: border-box;
      margin: 0;
      padding: 0;
    }
    
    body {
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      background: linear-gradient(135deg, #f5f7fa 0%, #e4e8f0 100%);
      color: #2c3e50;
      line-height: 1.6;
      padding: 0;
      margin: 0;
      min-height: 100vh;
    }
    
    /* Main Content */
    .container {
      max-width: 800px;
      margin: 30px auto;
      padding: 0 20px;
    }
    
    .form-container {
      background: white;
      border-radius: 15px;
      padding: 40px;
      box-shadow: 0 10px 30px rgba(0, 0, 0, 0.1);
      margin-bottom: 30px;
    }
    
    h1 {
      text-align: center;
      color: #2c3e50;
      margin-bottom: 30px;
      font-size: 2.2rem;
      position: relative;
      padding-bottom: 15px;
    }
    
    h1:after {
      content: '';
      position: absolute;
      bottom: 0;
      left: 50%;
      transform: translateX(-50%);
      width: 100px;
      height: 4px;
      background: linear-gradient(to right, #6a11cb, #2575fc);
      border-radius: 2px;
    }
    
    /* Form Elements */
    form {
      display: flex;
      flex-direction: column;
      gap: 25px;
    }
    
    .form-group {
      display: flex;
      flex-direction: column;
      gap: 8px;
    }
    
    .form-row {
      display: flex;
      gap: 20px;
    }
    
    .form-row .form-group {
      flex: 1;
    }
    
    label {
      font-weight: 600;
      color: #2c3e50;
      font-size: 1.1rem;
    }
    
    input, select, textarea {
      padding: 15px;
      border: 2px solid #e2e8f0;
      border-radius: 8px;
      font-size: 16px;
      transition: all 0.3s ease;
      font-family: inherit;
    }
    
    input:focus, select:focus, textarea:focus {
      outline: none;
      border-color: #3498db;
      box-shadow: 0 0 0 3px rgba(52, 152, 219, 0.2);
    }
    
    select {
      background-color: #f8f9fa;
      cursor: pointer;
    }
    
    textarea {
      min-height: 120px;
      resize: vertical;
    }
    
    fieldset {
      border: 2px solid #e2e8f0;
      border-radius: 8px;
      padding: 20px;
    }
    
    legend {
      font-weight: 600;
      color: #2c3e50;
      padding: 0 10px;
      font-size: 1.1rem;
    }
    
    .radio-group, .checkbox-group {
      display: flex;
      flex-wrap: wrap;
      gap: 15px;
      margin-top: 10px;
    }
    
    .radio-group label, .checkbox-group label {
      display: flex;
      align-items: center;
      gap: 8px;
      font-weight: normal;
      cursor: pointer;
    }
    
    input[type="radio"], input[type="checkbox"] {
      width: 20px;
      height: 20px;
      accent-color: #3498db;
    }
    
    /* Submit Button */
    .submit-btn {
      background: linear-gradient(to right, #6a11cb, #2575fc);
      color: white;
      border: none;
      padding: 16px;
      border-radius: 8px;
      font-size: 1.2rem;
      font-weight: 600;
      cursor: pointer;
      transition: all 0.3s ease;
      margin-top: 10px;
      box-shadow: 0 4px 10px rgba(37, 117, 252, 0.3);
    }
    
    .submit-btn:hover {
      transform: translateY(-3px);
      box-shadow: 0 8px 20px rgba(37, 117, 252, 0.4);
    }
    
    /* Social Links */
    .social-links {
      display: flex;
      justify-content: center;
      gap: 20px;
      margin: 30px 0;
    }
    
    .social-links a {
      display: flex;
      align-items: center;
      justify-content: center;
      width: 50px;
      height: 50px;
      border-radius: 50%;
      background: linear-gradient(135deg, #2c3e50 0%, #3498db 100%);
      color: white;
      text-decoration: none;
      font-size: 24px;
      transition: all 0.3s ease;
      box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);
    }
    
    .social-links a:hover {
      transform: translateY(-5px);
      box-shadow: 0 8px 15px rgba(0, 0, 0, 0.2);
    }
    
    /* Responsive Design */
    @media (max-width: 768px) {
      .form-row {
        flex-direction: column;
        gap: 15px;
      }
      
      .form-container {
        padding: 30px 20px;
      }
      
      h1 {
        font-size: 1.8rem;
      }
      
      nav {
        flex-direction: column;
        align-items: center;
      }
      
      nav a {
        width: 100%;
        text-align: center;
      }
    }
    
    @media (max-width: 480px) {
      .logo {
        width: 100px;
        height: 100px;
      }
      
      .logo-text {
        font-size: 16px;
      }
      
      h1 {
        font-size: 1.6rem;
      }
      
      input, select, textarea {
        padding: 12px;
      }
    }
    
    /* Decorative Elements */
    .required:after {
      content: " *";
      color: #e74c3c;
    }
    
    .form-section {
      margin-bottom: 30px;
      padding-bottom: 20px;
      border-bottom: 2px solid #f1f2f6;
    }
    
    .form-section-title {
      font-size: 1.3rem;
      color: #3498db;
      margin-bottom: 20px;
      padding-left: 10px;
      border-left: 4px solid #3498db;
    }
    
    /* Validation Styles */
    .error-message {
      color: #e74c3c;
      font-size: 14px;
      margin-top: 5px;
      display: none;
    }
    
    .fieldset-legend {
      font-weight: 600;
      color: #2c3e50;
      padding: 0 10px;
    }
    
    input:invalid, select:invalid {
      border-color: #e74c3c;
    }
    
    input:valid, select:valid {
      border-color: #2ecc71;
    }
    
    .age-error {
      color: #e74c3c;
      font-size: 14px;
      margin-top: 5px;
      display: none;
    }
    .large-textarea {
    width: 100%;          /* full width of container */
    min-height: 180px;    /* taller box */
    max-height: 300px;    /* prevents it from getting too tall */
    font-size: 16px;      /* readable text */
    padding: 15px;        /* consistent with other inputs */
    border-radius: 8px;   /* same style as other inputs */
    border: 2px solid #e2e8f0;
    resize: vertical;     /* user can resize vertically */
    font-family: inherit; /* matches other inputs */
}

</style>