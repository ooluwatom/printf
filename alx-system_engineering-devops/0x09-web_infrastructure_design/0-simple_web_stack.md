# Description
This is a simple web infrastructure that hosts a website that is reachable via www.foobar.com. There are no firewalls or SSL certificates for protecting the server's network. Each component (database, application server) has to share the resources (CPU, RAM, and SSD) provided by the server.
# Specifics About This Infrastructure
<ul>
<li>
<strong>at a server is</strong>
A server is a computer hardware or software that provides services to other computers, which are usually referred to as clients.
</li>

<li>
<strong>The role of the domain name.</strong>
To provide a human-friendly alias for an IP Address. For example, the domain name www.wikipedia.org is easier to recognize and remember than 91.198.174.192. The IP address and domain name alias is mapped in the Domain Name System (DNS)
</li>

<li>
<strong>The type of DNS record www is in www.foobar.com.</strong>
www.foobar.com uses an A record. This can be checked by running dig www.foobar.com.
Note: the results might be different but for the infrastructure in this design, an A record is used.
Address Mapping record (A Record)—also known as a DNS host record, stores a hostname and its corresponding IPv4 address.</li>

<li>
<strong>The role of the web server.</strong>
The web server is a software/hardware that accepts requests via HTTP or secure HTTP (HTTPS) and responds with the content of the requested resource or an error messsage.
</li>

<li>
<strong>The role of the application server.</strong>
To install, operate and host applications and associated services for end users, IT services and organizations and facilitates the hosting and delivery of high-end consumer or business applications.
</li>

<li>
<strong>What the server uses to communicate with the client (computer of the user requesting the website).</strong>
Communication between the client and the server occurs over the internet network through the TCP/IP protocol suite.
</li>

# Issues With This Infrastructure

<li>There are multiple SPOF (Single Point Of Failure) in this infrastructure.
For example, if the MySQL database server is down, the entire site would be down.</li>

<li>Downtime when maintenance needed.
When we need to run some maintenance checks on any component, they have to be put down or the server has to be turned off. Since there's only one server, the website would be experiencing a downtime.</li>

<li>Cannot scale if there's too much incoming traffic.
It would be hard to scale this infrastructure becauses one server contains the required components. The server can quickly run out of resources or slow down when it starts receiving a lot of requests.</li>
<ul>

