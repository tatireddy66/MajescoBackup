package com.poc.driver;

import java.io.IOException;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.firefox.FirefoxDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.Select;
import org.openqa.selenium.support.ui.WebDriverWait;

import com.generic.pagefactory.ILoginPageElements;
import com.poc.constants.Constants;
import com.poc.utility.Utility;
import com.neotys.selenium.proxies.NLWebDriver;
import com.neotys.selenium.proxies.WebDriverProxy;

public class DriverScript {
	//private static NLWebDriver driver;
     public static WebDriver driver;
	static String userName;
	static String password;
	static WebDriverWait wait;
	static WebElement jobIcon;
	static WebElement jobLink;

	public static void main(String args[]) throws IOException {
		
		try
		{
			
			Utility utility = new Utility();
			userName = utility.readProperties("application.properties", "userName");
			password = utility.readProperties("application.properties", "password");
			driver = Utility.browserInitialization();
			//driver = WebDriverProxy.newInstance(new FirefoxDriver());
			driver.manage().window().maximize();
			driver.get(Constants.TEST_URL);
	
			Thread.sleep(1000);
			driver.findElement(ILoginPageElements.USERNAME).clear();
			driver.findElement(ILoginPageElements.USERNAME).sendKeys(userName);
			driver.findElement(ILoginPageElements.PASSWORD).clear();
			driver.findElement(ILoginPageElements.PASSWORD).sendKeys(password);
			driver.findElement(ILoginPageElements.SIGNIN_BTN).click();
	
			wait = new WebDriverWait(driver, 800);
			jobIcon = driver.findElement(ILoginPageElements.JOB_ICON);
			wait.until(ExpectedConditions.visibilityOf(jobIcon));
			jobIcon.click();
	
			jobLink = driver.findElement(ILoginPageElements.JOB_LINK);
			wait.until(ExpectedConditions.visibilityOf(jobLink));
			jobLink.click();
			Thread.sleep(600);
			driver.findElement(ILoginPageElements.FIRSTNAME).sendKeys(
					Constants.FNAME);
			driver.findElement(ILoginPageElements.LASTNAME).sendKeys(
					Constants.LNAME);
			driver.findElement(ILoginPageElements.EMAILTXTBOX).sendKeys(
					Constants.EMAILID);
			new Select(driver.findElement(ILoginPageElements.CONTACTNO))
					.selectByValue(Constants.CONTACTNO);
			driver.findElement(ILoginPageElements.CONTACTNOTXTFIELD).sendKeys(
					Constants.CONTACTNUMBER);
			new Select(driver.findElement(ILoginPageElements.RELATION))
					.selectByVisibleText(Constants.RELATION);
			driver.findElement(ILoginPageElements.NOTE).sendKeys(Constants.NOTE);
			driver.findElement(ILoginPageElements.SUBMIT).click();
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}

}
