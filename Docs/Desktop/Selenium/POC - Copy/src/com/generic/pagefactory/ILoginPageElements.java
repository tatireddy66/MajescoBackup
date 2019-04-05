package com.generic.pagefactory;

import org.openqa.selenium.By;

public interface ILoginPageElements {	
	public static final By USERNAME = By.xpath("//*[@id='xu']");
	public static final By PASSWORD = By.xpath("//*[@id='log_right']/div[@class='log_filed login_block']/input[@type='password']");
	public static final By SIGNIN_BTN = By.id("login_button1");
	public static final By JOB_ICON = By.xpath("//*[@id='job']/a");
	public static final By JOB_LINK = By.xpath("//*[@id='ctp_job_area_inner']/a");
	
	public static final By FIRSTNAME = By.id("candFirstName");
	public static final By LASTNAME = By.id("candLastName");
	public static final By EMAILTXTBOX = By.id("candEmailAddr");
	public static final By CONTACTNO = By.id("candNumberExt");
	public static final By CONTACTNOTXTFIELD = By.id("candContactNo");
	public static final By RELATION = By.id("relationshipMstrSeq");
	public static final By NOTE = By.id("noteToRecr");
	public static final By SUBMIT = By.id("btnCommonTalentPool");
}
