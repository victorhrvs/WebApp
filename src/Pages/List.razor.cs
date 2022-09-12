using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;


public class HomeController : Controller
{
    public void OnGet()
    {
        var message = HttpContext.Request.PathBase;
    }
}