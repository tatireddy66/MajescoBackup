package com.poc.utility;

import java.io.FileInputStream;
import java.io.InputStream;
import java.util.Properties;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.firefox.FirefoxDriver;
import org.openqa.selenium.ie.InternetExplorerDriver;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.openqa.selenium.safari.SafariDriver;
import org.openqa.selenium.safari.SafariOptions;

import com.neotys.selenium.proxies.NLWebDriver;
import com.neotys.selenium.proxies.WebDriverProxy;
import com.poc.constants.Constants;


public class Utility
{
	static WebDriver driver;

	public static WebDriver browserInitialization()
	{
		try
		{

			String test_browser	= Constants.BROWSERTYPE;
			//Object baseURL = configHashMap.get("BASEURL");

			switch (test_browser) 
			{
			case "FIREFOX":
				//driver = new FirefoxDriver();
				driver = WebDriverProxy.newInstance(new FirefoxDriver());
				return driver;

			case "IE":
				System.setProperty("webdriver.ie.driver","Driver/IEDriverServer.exe");
				DesiredCapabilities capabilities = DesiredCapabilities.internetExplorer();
				capabilities.setCapability(InternetExplorerDriver.IE_ENSURE_CLEAN_SESSION, true);
				driver = new InternetExplorerDriver(capabilities);
				return driver;

			case "CHROME":
				System.setProperty("webdriver.chrome.driver","Driver/chromedriver.exe");
				driver = new ChromeDriver();
				return driver;

			case "SAFARI":
				SafariOptions options = new SafariOptions();
				options.setUseCleanSession(true);
				driver = new SafariDriver(options);
				return driver;

			default:
				System.out.println("We don't support this Browser Sorry!!!!!!!!!!");
				throw new RuntimeException("Browser type unsupported");
			}
		}
		catch(Exception exception)
		{
			exception.printStackTrace();
		}
		return driver;
	}
	public String readProperties(String file, String reqProperty)
	{
		Properties prop = new Properties();
		InputStream input = null;
		String propRead = null;
		try 
		{
			input = new FileInputStream(file);
			prop.load(input);
			propRead = prop.getProperty(reqProperty);
		}
		catch(Exception e)
		{
			System.out.println("failed to read properties file");
		}
		return propRead;

	}
}