<!-- header.inc -->
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title><?php echo $title; ?></title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
</head>
<header class="header">
    <h1>Welcome to <br> QuantumAxis <br> Engineering</h1>
</header>

<style>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: 'Poppins', 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
        }
        
        body {
            background-color: #f8f9fa;
            color: #2c3e50;
            line-height: 1.6;
            padding-top: 80px;
        }
        
        .header {
            width: 100%;
            background: linear-gradient(rgba(0, 0, 0, 0.7), rgba(0, 0, 0, 0.7)), 
                        url('https://images.unsplash.com/photo-1518770660439-4636190af475?ixlib=rb-4.0.3&auto=format&fit=crop&w=1500&q=80');
            background-size: cover;
            background-repeat: no-repeat;
            background-position: center;
            height: 400px;
            display: flex;
            justify-content: flex-start;
            align-items: center;
            color: white;
            text-align: left;
            padding: 80px;
            margin-bottom: 30px;
        }
        
        .header h1 {
            font-size: 3.5rem;
            font-weight: 700;
            line-height: 1.2;
            text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.5);
        }
        
        #menu {
            width: 100%;
            background: linear-gradient(to right, #2c3e50, #3498db);
            padding: 15px 40px;
            display: flex;
            align-items: center;
            justify-content: flex-start;
            gap: 25px;
            position: fixed;
            top: 0;
            z-index: 1000;
            box-shadow: 0 4px 12px rgba(0, 0, 0, 0.1);
        }
        
        #menu img {
            margin-right: 15px;
            height: 50px;
            width: auto;
            border-radius: 5px;
        }
        
        #menu a.ridge {
            color: white;
            border: 2px solid rgba(255, 255, 255, 0.3);
            padding: 10px 20px;
            text-decoration: none;
            font-weight: 600;
            border-radius: 30px;
            transition: all 0.3s ease;
        }
        
        #menu a.ridge:hover {
            background-color: rgba(255, 255, 255, 0.2);
            transform: translateY(-2px);
        }

        section {
            padding: 60px 40px;
            margin: 30px auto;
            max-width: 1200px;
            border-radius: 12px;
            box-shadow: 0 5px 20px rgba(0, 0, 0, 0.08);
            background: white;
        }
        
        h2 {
            color: #2c3e50;
            font-size: 2.2rem;
            margin-bottom: 25px;
            padding-bottom: 10px;
            border-bottom: 3px solid #3498db;
            display: inline-block;
        }
        
        #services {
            background: linear-gradient(rgba(255, 255, 255, 0.9), rgba(255, 255, 255, 0.9)), 
                        url('https://images.unsplash.com/photo-1451187580459-43490279c0fa?ixlib=rb-4.0.3&auto=format&fit=crop&w=1500&q=80');
            background-size: cover;
            background-attachment: fixed;
            text-align: center;
        }
        
        #services ul {
            list-style: none;
            display: flex;
            justify-content: center;
            flex-wrap: wrap;
            gap: 20px;
            margin-top: 30px;
        }
        
        #services li {
            background: linear-gradient(135deg, #6a11cb 0%, #2575fc 100%);
            color: white;
            padding: 15px 30px;
            border-radius: 8px;
            font-weight: 600;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            transition: transform 0.3s ease;
        }
        
        #services li:hover {
            transform: translateY(-5px);
        }

      
        .container {
            width: 100%;
            margin-top: 30px;
            display: flex;
            flex-wrap: wrap;
            justify-content: space-between;
            gap: 25px;
        }
        
        .card {
            flex: 1;
            min-width: 280px;
            padding: 30px;
            color: white;
            border-radius: 15px;
            box-shadow: 0 8px 20px rgba(0, 0, 0, 0.1);
            transition: all 0.3s ease;
        }
        
        .card:hover {
            transform: translateY(-10px);
            box-shadow: 0 12px 25px rgba(0, 0, 0, 0.15);
        }
        
        .commitment {
            background: linear-gradient(135deg, #2c3e50 0%, #4a6491 100%);
        }
        
        .mission {
            background: linear-gradient(135deg, #10507a 0%, #187bcd 100%);
        }
        
        .vision {
            background: linear-gradient(135deg, #3498db 0%, #2ecc71 100%);
        }
        
        .card h2 {
            font-size: 1.8rem;
            margin-bottom: 20px;
            border-bottom: 2px solid rgba(255, 255, 255, 0.3);
            color: white;
        }
        
        
        #socials {
            padding: 40px;
        }
        
        .contact-map-wrapper {
            display: flex;
            flex-wrap: wrap;
            gap: 40px;
            justify-content: space-between;
        }
        
        .contact-info {
            flex: 1;
            min-width: 300px;
        }
        
        .contact-info p {
            margin-bottom: 20px;
            display: flex;
            align-items: center;
            font-size: 1.1rem;
        }
        
        .contact-info img {
            margin-right: 15px;
            width: 20px;
            height: 20px;
        }
        
        .map-container {
            flex: 1;
            min-width: 300px;
            border-radius: 12px;
            overflow: hidden;
            box-shadow: 0 5px 15px rgba(0, 0, 0, 0.1);
        }
        
        .map-container iframe {
            width: 100%;
            height: 300px;
            border: none;
        }
        
      
        #contact {
            background: linear-gradient(135deg, #f8f9fa 0%, #e9ecef 100%);
            text-align: center;
            padding: 50px 40px;
        }
        
        #contact a {
            display: inline-flex;
            align-items: center;
            margin: 15px;
            padding: 12px 25px;
            background: white;
            color: #2c3e50;
            text-decoration: none;
            border-radius: 50px;
            font-weight: 600;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            transition: all 0.3s ease;
        }
        
        #contact a:hover {
            transform: translateY(-5px);
            box-shadow: 0 8px 20px rgba(0, 0, 0, 0.15);
            color: #3498db;
        }
        
        #contact img {
            margin-right: 10px;
            width: 20px;
            height: 20px;
        }
        
        /* Next Button */
        .next-button {
            text-align: center;
            margin: 40px auto;
            max-width: 1200px;
            padding: 0 20px;
        }
        
        .next-button a {
            display: inline-block;
            padding: 16px 40px;
            background: linear-gradient(135deg, #6a11cb 0%, #2575fc 100%);
            color: white;
            text-decoration: none;
            border-radius: 50px;
            font-weight: 600;
            font-size: 1.2rem;
            box-shadow: 0 6px 20px rgba(37, 117, 252, 0.3);
            transition: all 0.3s ease;
        }
        
        .next-button a:hover {
            transform: translateY(-5px);
            box-shadow: 0 10px 25px rgba(37, 117, 252, 0.5);
        }
        
    * {
        margin: 0;
        padding: 0;
        box-sizing: border-box;
        font-family: 'Poppins', 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    }

    body {
        background-color: #f8f9fa;
        color: #2c3e50;
        line-height: 1.6;
        padding-top: 80px;
    }

    .header {
        width: 100%;
        background: linear-gradient(rgba(0, 0, 0, 0.7), rgba(0, 0, 0, 0.7)),
                    url('https://images.unsplash.com/photo-1518770660439-4636190af475?ixlib=rb-4.0.3&auto=format&fit=crop&w=1500&q=80');
        background-size: cover;
        background-repeat: no-repeat;
        background-position: center;
        height: 400px;
        display: flex;
        justify-content: flex-start;
        align-items: center;
        color: white;
        text-align: left;
        padding: 80px;
        margin-bottom: 30px;
    }

    .header h1 {
        font-size: 3.5rem;
        font-weight: 700;
        line-height: 1.2;
        text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.5);
    }

    /* Card CSS for About / Services section */
    .container {
        width: 100%;
        margin-top: 30px;
        display: flex;
        flex-wrap: wrap;
        justify-content: space-between;
        gap: 25px;
    }

    .card {
        flex: 1;
        min-width: 280px;
        padding: 30px;
        color: white;
        border-radius: 15px;
        box-shadow: 0 8px 20px rgba(0, 0, 0, 0.1);
        transition: all 0.3s ease;
    }

    .card:hover {
        transform: translateY(-10px);
        box-shadow: 0 12px 25px rgba(0, 0, 0, 0.15);
    }

    .commitment {
        background: linear-gradient(135deg, #2c3e50 0%, #4a6491 100%);
    }

    .mission {
        background: linear-gradient(135deg, #10507a 0%, #187bcd 100%);
    }

    .vision {
        background: linear-gradient(135deg, #3498db 0%, #2ecc71 100%);
    }

    .card h2 {
        font-size: 1.8rem;
        margin-bottom: 20px;
        border-bottom: 2px solid rgba(255, 255, 255, 0.3);
        color: white;
    }

    @media (max-width: 768px) {
        .header {
            padding: 40px;
            height: 300px;
        }

        .header h1 {
            font-size: 2.5rem;
        }

        .container {
            flex-direction: column;
        }

        .card {
            width: 100%;
            margin-bottom: 20px;
        }
    }
</style>
