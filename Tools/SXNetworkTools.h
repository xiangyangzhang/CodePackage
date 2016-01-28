//
//  SXNetworkTools.h

/*
 `AFHTTPSessionManager` is a subclass of `AFURLSessionManager` with convenience methods for making HTTP requests. When a `baseURL` is provided, requests made with the `GET` / `POST` / et al. convenience methods can be made with relative paths.
 <ul>
 <li>`AFHTTPSessionManager` 是 `AFURLSessionManager` 的子类，提供 HTTP 请求的常用方法</li>
 <li>如果指定了 `baseURL`，则 `GET` / `POST` 等方法可以使用相对路径</li>
 </ul>
 
 ## Subclassing Notes - 子类注意事项
 
 Developers targeting iOS 7 or Mac OS X 10.9 or later that deal extensively with a web service are encouraged to subclass `AFHTTPSessionManager`, providing a class method that returns a shared singleton object on which authentication and other configuration can be shared across the application.
 <ul>
 <li>要开发 iOS 7 或 Mac OS X 10.9 以上版本的 web 交互应用，建议使用 `AFHTTPSessionManager` 子类</li>
 <li>提供一个类方法返回全局共享的单例对象，这样诸如身份验证等其他配置便可以在整个应用程序中共享</li>
 </ul>
 
 For developers targeting iOS 6 or Mac OS X 10.8 or earlier, `AFHTTPRequestOperationManager` may be used to similar effect.
 <br />要开发支持 iOS 6 或 Mac OS X 10.8 之前版本，使用 `AFHTTPRequestOperationManager` 能够达到类似的效果
 */

#import "AFHTTPSessionManager.h"

@interface SXNetworkTools : AFHTTPSessionManager

+ (instancetype)sharedNetworkTools;
+ (instancetype)sharedNetworkToolsWithoutBaseUrl;

@end
