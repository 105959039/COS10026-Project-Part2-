<!-- Footer -->
<footer>
    <div class="footer-content">
        <div class="footer-section">
            <h3>QuantumAxis Engineering</h3>
            <p>Innovating the future of technology</p>
        </div>

        <div class="footer-section">
            <h4>Contact Us</h4>
            <p>Email: quantumaxis212@gmail.com</p>
            <p>Phone: 016-334 7378</p>
        </div>

        <div class="footer-section">
            <h4>Follow Us</h4>
            <div class="social-links">
                <a href="https://linkedin.com/company/quantumaxis-engineering" target="_blank" aria-label="LinkedIn">
                    <i class="fa-brands fa-linkedin"></i>
                </a>
                <a href="https://twitter.com/quantumaxis_eng" target="_blank" aria-label="Twitter">
                    <i class="fa-brands fa-twitter"></i>
                </a>
                <a href="https://facebook.com/quantumaxisengineering" target="_blank" aria-label="Facebook">
                    <i class="fa-brands fa-facebook"></i>
                </a>
                <a href="https://instagram.com/quantumaxis_engineering" target="_blank" aria-label="Instagram">
                    <i class="fa-brands fa-instagram"></i>
                </a>
                <a href="https://youtube.com/@quantumaxisengineering" target="_blank" aria-label="YouTube">
                    <i class="fa-brands fa-youtube"></i>
                </a>
                <a href="https://github.com/quantumaxis" target="_blank" aria-label="GitHub">
                    <i class="fa-brands fa-github"></i>
                </a>
            </div>

            <p style="margin-top: 15px; font-size: 0.9rem; color: rgba(255, 255, 255, 0.8);">
                Stay connected for latest updates
            </p>
        </div>
    </div>

    <div class="footer-bottom">
        <p>&copy; 2025 QuantumAxis Engineering | All rights reserved</p>
    </div>
</footer>

<style>
/* Footer Styles */
footer {
    background: linear-gradient(135deg, #2c3e50 0%, #3498db 100%);
    color: white;
    padding: 40px 0 20px;
    margin-top: 50px;
    width: 100%;
}

.footer-content {
    display: flex;
    justify-content: space-between;
    flex-wrap: wrap;
    max-width: 1200px;
    margin: 0 auto;
    padding: 0 20px;
    gap: 30px;
}

.footer-section {
    flex: 1;
    min-width: 250px;
    margin-bottom: 20px;
}

.footer-section h3, 
.footer-section h4 {
    color: white;
    margin-bottom: 20px;
}

.footer-section p {
    color: rgba(255, 255, 255, 0.9);
    margin-bottom: 12px;
    line-height: 1.6;
}

.social-links {
    display: flex;
    gap: 12px;
    margin-top: 15px;
    flex-wrap: wrap;
}

.social-links a {
    color: white;
    font-size: 1.3rem;
    transition: all 0.3s ease;
    background: rgba(255, 255, 255, 0.1);
    width: 45px;
    height: 45px;
    border-radius: 50%;
    display: flex;
    align-items: center;
    justify-content: center;
    border: 1px solid rgba(255, 255, 255, 0.2);
    text-decoration: none;
}

/* Hover Colors */
.social-links a[href*="linkedin"]:hover { background: #0077b5; }
.social-links a[href*="twitter"]:hover { background: #1da1f2; }
.social-links a[href*="facebook"]:hover { background: #1877f2; }
.social-links a[href*="instagram"]:hover { background: #e4405f; }
.social-links a[href*="youtube"]:hover { background: #ff0000; }
.social-links a[href*="github"]:hover { background: #333; }

.social-links a:hover {
    transform: translateY(-3px);
    box-shadow: 0 5px 15px rgba(0, 0, 0, 0.3);
    border-color: transparent;
}

.footer-bottom {
    border-top: 1px solid rgba(255, 255, 255, 0.2);
    padding-top: 20px;
    text-align: center;
    max-width: 1200px;
    margin: 30px auto 0;
    padding-left: 20px;
    padding-right: 20px;
}

.footer-bottom p {
    margin: 0;
    font-size: 1rem;
    color: rgba(255, 255, 255, 0.8);
}

/* Responsive */
@media (max-width: 768px) {
    .footer-content {
        flex-direction: column;
        text-align: center;
    }

    .social-links {
        justify-content: center;
    }
}
</style>
