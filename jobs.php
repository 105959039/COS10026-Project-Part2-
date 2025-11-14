<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

$page_title = "QuantumAxis Engineering - Career Opportunities";



// Include database configuration
include 'config.inc';

// Get all jobs from database
$jobs = getAllJobs();
$jobCount = count($jobs);

// Include header
include 'header.inc';
// Include menu
include 'menu.inc';
?>

<div class="container">
    <div class="job-count">
        <strong><?php echo $jobCount; ?> Job Position<?php echo $jobCount !== 1 ? 's' : ''; ?> Available</strong>
    </div>
    
    <div class="content-wrapper">
        <div class="main-content">
            <?php if ($jobCount > 0): ?>
                <?php foreach ($jobs as $job): ?>
                    <?php
                    // Decode JSON arrays
                    $responsibilities = json_decode($job['responsibilities'], true) ?: [];
                    $essentialQualifications = json_decode($job['essential_qualifications'], true) ?: [];
                    $preferableQualifications = json_decode($job['preferable_qualifications'], true) ?: [];
                    ?>
                    
                    <section>
                        <h2><i class="<?php echo htmlspecialchars($job['icon_class']); ?>"></i> <?php echo htmlspecialchars($job['title']); ?></h2>
                        <div class="decorative-bar"></div>
                        <p><strong>Reference Number:</strong> <?php echo htmlspecialchars($job['reference_number']); ?></p>

                        <h3>Position Overview</h3>
                        <p><?php echo htmlspecialchars($job['overview']); ?></p>

                        <div class="highlight">
                            <p><strong>Job type:</strong> <?php echo htmlspecialchars($job['job_type']); ?></p>
                            <p><strong>Category:</strong> <?php echo htmlspecialchars($job['category']); ?></p>
                            <p><strong>Salary Range:</strong> <?php echo htmlspecialchars($job['salary_range']); ?></p>
                            <p><strong>Reports To:</strong> <?php echo htmlspecialchars($job['reports_to']); ?></p>
                        </div>

                        <?php if (!empty($responsibilities)): ?>
                        <h3>Key Responsibilities</h3>
                        <ul>
                            <?php foreach ($responsibilities as $responsibility): ?>
                                <li><?php echo htmlspecialchars($responsibility); ?></li>
                            <?php endforeach; ?>
                        </ul>
                        <?php endif; ?>

                        <?php if (!empty($essentialQualifications)): ?>
                        <h3>Required Qualifications</h3>
                        <h4>Essential</h4>
                        <ol>
                            <?php foreach ($essentialQualifications as $qualification): ?>
                                <li><?php echo htmlspecialchars($qualification); ?></li>
                            <?php endforeach; ?>
                        </ol>
                        <?php endif; ?>

                        <?php if (!empty($preferableQualifications)): ?>
                        <h4>Preferable</h4>
                        <ul>
                            <?php foreach ($preferableQualifications as $qualification): ?>
                                <li><?php echo htmlspecialchars($qualification); ?></li>
                            <?php endforeach; ?>
                        </ul>
                        <?php endif; ?>
                    </section>
                <?php endforeach; ?>
            <?php else: ?>
                <section>
                    <h2>No Job Positions Available</h2>
                    <p>Currently, there are no open positions. Please check back later for new opportunities.</p>
                </section>
            <?php endif; ?>
        </div>

        <!-- Aside Section for Additional Information -->
        <div class="aside-container">
            <aside>
                <h3><i class="fas fa-lightbulb"></i> Application Tips</h3>
                <p>To improve your chances of being selected, make sure to:</p>
                <ul>
                    <li>Tailor your resume for the specific role.</li>
                    <li>Highlight your technical skills and certifications.</li>
                    <li>Provide clear examples of past projects or achievements.</li>
                    <li>Prepare for both technical and behavioral interview questions.</li>
                </ul>
                
                <h3><i class="fas fa-star"></i> Why Join Us?</h3>
                <p>We offer competitive salaries, excellent benefits, and opportunities for professional growth in a dynamic environment.</p>
                
                <h3><i class="fas fa-envelope"></i> Contact HR</h3>
                <p>Email: quantumaxis212@gmail.com <br>Phone: 016-334 7378</p>
            </aside>
        </div>
    </div>
</div>

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

<?php include 'footer.inc'; ?>