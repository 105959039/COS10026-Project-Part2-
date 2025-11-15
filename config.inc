<?php
// config.inc - Site-wide configuration

define('SITE_TITLE', 'QuantumAxis Engineering');
define('COPYRIGHT_YEAR', 2025);
define('LOGO_PATH', 'images/QAE_logo.png');

// Form settings
define('FORM_ACTION', 'process_eoi.php');

// Job references
$JOB_REFERENCES = [
    'AI123' => 'Artificial Intelligence',
    'CS456' => 'Computer Science',
    'DS789' => 'Data Science'
];

// States and postcode ranges
$STATE_POSTCODES = [
    'VIC' => ['min' => 3000, 'max' => 3999],
    'NSW' => ['min' => 2000, 'max' => 2999],
    'QLD' => ['min' => 4000, 'max' => 4999],
    'WA'  => ['min' => 6000, 'max' => 6999],
    'SA'  => ['min' => 5000, 'max' => 5999],
    'TAS' => ['min' => 7000, 'max' => 7999],
    'ACT' => ['min' => 2600, 'max' => 2618],
    'NT'  => ['min' => 800,  'max' => 999]
];

// Technical skills
$TECH_SKILLS = [
    'cybsec' => 'Cybersecurity',
    'datasci' => 'Data Scientist',
    'webdev' => 'Web Development',
    'artint' => 'Artificial Intelligence',
    'cloud' => 'Cloud Computing',
    'ml' => 'Machine Learning'
];

// Social links
$SOCIAL_LINKS = [
    'facebook' => 'https://www.facebook.com/profile.php?id=61580514305943',
    'instagram' => 'https://www.instagram.com/quantumaxis/',
    'linkedin' => '#',
    'twitter' => '#'
];
?>
