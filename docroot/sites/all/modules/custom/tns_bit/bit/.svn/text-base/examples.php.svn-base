<?php
/* BIT API PHP Library Version 0.50 Alpha
* 
* Developed by Greg Avola (http://twitter.com/gregavola)
*
* For more documentation please refer to http://code.google.com/p/bit-php-library/
*
* examples.php - The file will provide some examples for you to get started.
*													
*/

	?>
		<h1>BIT API PHP Library - Examples </h1>
		<p>This file should give a good overview on how this class works. Please refer to <a href="http://code.google.com/p/bit-php-library/">http://code.google.com/p/bit-php-library/</a> for more documentation.</p>
	<?
	// include the BIT class file
	include ("BIT.php");
	
	// create a new instance of the BIT class.
	$x = new BIT();
	
	// set your API Key. This can be anything you want - it just a way that can BIT can track your calls, in case of an issue.
	$x->setAPI("BIT_API_PHP_LIBRARY");
	
	
	?>
	<h1>Example #1 - Artist Search</h1>
	<?
	// make sure you wrap your calls in an try/catch incase of an issue with server calls.
	try
	{
		// set the Artist that you want to search. Make sure you leave it plain text - do not do any URL encoding. The class file will take care of that for you.
		$artists = "Angels and Airwaves";
		
		// perform the get Artist function
		$results = $x->getArtist($artists);
		
		echo "Bands in Town URL: " . $results->url . "<br>";
	}
	catch(Exception $e)
	{
		// If you have an error from the request - it will be displayed here.
		echo $e->getMessage();
	}
	
	?>
	<h1>Example #2 - Single Artist Event Serach</h1>
	<?
	// make sure you wrap your calls in an try/catch incase of an issue with server calls.
	try
	{
		// set the Artist that you want to search. Make sure you leave it plain text - do not do any URL encoding. The class file will take care of that for you.
		$artists = "Angels and Airwaves";
		
		// perform the get Artist function
		$results = $x->getEventsForSingleArtist($artists);
		
		// loop through the response
		foreach($results as $events)
		{
			$dateofevent = date("m/d/y H:i", strtotime($events->datetime));
			$venue_city = $events->venue->city;
			$venue_region = $events->venue->region;
			$venue_name = $events->venue->name;
			
			echo $venue_name . " (" . $venue_city . "," . $venue_region . ") on " . $dateofevent . "<br>";
		}
	}
	catch(Exception $e)
	{
		// If you have an error from the request - it will be displayed here.
		echo $e->getMessage();
	}
	
	
	?>
	<h1>Example #3 - Event Search (Location & Multiple Artists)</h1>
	<?
	// make sure you wrap your calls in an try/catch incase of an issue with server calls.
	try
	{
		// add the artists you want to search in an array formay (key=>artist_name)
		$artists = array(0 => "Angels and Airwaves", 1 => "Paramore");
		
		// add location of concert search. This can be city, state or latitude, longitude.
		$location = "Boston, MA";
		
		// NOTE: You have to either pass the artists as an array or location to get results.
		
		// perform the get event search function
		// the paramters are artists (array), location, radius, date range (see site for details), page, results per page
		$results = $x->eventSearch($artists, $location, 10, "upcoming", 1, 100);
		
		// loop through the response
		foreach($results as $events)
		{
			// getting the first artist in the the artists array (otherwise known as the headliner)
			$main_artist = $events->artists[0]->name;
			
			$dateofevent = date("m/d/y H:i", strtotime($events->datetime));
			$venue_city = $events->venue->city;
			$venue_region = $events->venue->region;
			$venue_name = $events->venue->name;
			
			echo $main_artist . " - " . $venue_name . " (" . $venue_city . "," . $venue_region . ") on " . $dateofevent . "<br>";
		}
	}
	catch(Exception $e)
	{
		// If you have an error from the request - it will be displayed here.
		echo $e->getMessage();
	}
	
	?>
	<h1>Example #4 - Event Recommended Search (Location & Multiple Artists)</h1>
	<?
	// make sure you wrap your calls in an try/catch incase of an issue with server calls.
	try
	{
		// add the artists you want to search in an array formay (key=>artist_name)
		$artists = array(0 => "Angels and Airwaves", 1 => "Paramore");
		
		// add location of concert search. This can be city, state or latitude, longitude.
		$location = "Boston, MA";
		
		// NOTE: You have to either pass the artists as an array or location to get results.
		
		// perform the get event search function
		// the paramters are artists (array), location, radius, date range (see site for details), page, results per page
		$results = $x->recommendedEvents($artists, $location, 10, "upcoming", 1, 100);
		
		// loop through the response
		foreach($results as $events)
		{
			// getting the first artist in the the artists array (otherwise known as the headliner)
			$main_artist = $events->artists[0]->name;
			
			$dateofevent = date("m/d/y H:i", strtotime($events->datetime));
			$venue_city = $events->venue->city;
			$venue_region = $events->venue->region;
			$venue_name = $events->venue->name;
			
			echo $main_artist . " - " . $venue_name . " (" . $venue_city . "," . $venue_region . ") on " . $dateofevent . "<br>";
		}
	}
	catch(Exception $e)
	{
		// If you have an error from the request - it will be displayed here.
		echo $e->getMessage();
	}
	

?>