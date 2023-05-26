/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_38_ping.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_38_ping::V0_0_38_ping()
{
    m_Hostname = utility::conversions::to_string_t("");
    m_HostnameIsSet = false;
    m_Ping = utility::conversions::to_string_t("");
    m_PingIsSet = false;
    m_Mode = utility::conversions::to_string_t("");
    m_ModeIsSet = false;
    m_Status = 0;
    m_StatusIsSet = false;
}

V0_0_38_ping::~V0_0_38_ping()
{
}

void V0_0_38_ping::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_38_ping::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HostnameIsSet)
    {
        val[utility::conversions::to_string_t(U("hostname"))] = ModelBase::toJson(m_Hostname);
    }
    if(m_PingIsSet)
    {
        val[utility::conversions::to_string_t(U("ping"))] = ModelBase::toJson(m_Ping);
    }
    if(m_ModeIsSet)
    {
        val[utility::conversions::to_string_t(U("mode"))] = ModelBase::toJson(m_Mode);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }

    return val;
}

bool V0_0_38_ping::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("hostname"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("hostname")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setHostname;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHostname);
            setHostname(refVal_setHostname);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ping"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ping")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPing;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPing);
            setPing(refVal_setPing);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("mode"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mode")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMode);
            setMode(refVal_setMode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    return ok;
}

void V0_0_38_ping::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_HostnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("hostname")), m_Hostname));
    }
    if(m_PingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ping")), m_Ping));
    }
    if(m_ModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mode")), m_Mode));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
}

bool V0_0_38_ping::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("hostname"))))
    {
        utility::string_t refVal_setHostname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("hostname"))), refVal_setHostname );
        setHostname(refVal_setHostname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ping"))))
    {
        utility::string_t refVal_setPing;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ping"))), refVal_setPing );
        setPing(refVal_setPing);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("mode"))))
    {
        utility::string_t refVal_setMode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mode"))), refVal_setMode );
        setMode(refVal_setMode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        int32_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    return ok;
}

utility::string_t V0_0_38_ping::getHostname() const
{
    return m_Hostname;
}

void V0_0_38_ping::setHostname(const utility::string_t& value)
{
    m_Hostname = value;
    m_HostnameIsSet = true;
}

bool V0_0_38_ping::hostnameIsSet() const
{
    return m_HostnameIsSet;
}

void V0_0_38_ping::unsetHostname()
{
    m_HostnameIsSet = false;
}
utility::string_t V0_0_38_ping::getPing() const
{
    return m_Ping;
}

void V0_0_38_ping::setPing(const utility::string_t& value)
{
    m_Ping = value;
    m_PingIsSet = true;
}

bool V0_0_38_ping::pingIsSet() const
{
    return m_PingIsSet;
}

void V0_0_38_ping::unsetPing()
{
    m_PingIsSet = false;
}
utility::string_t V0_0_38_ping::getMode() const
{
    return m_Mode;
}

void V0_0_38_ping::setMode(const utility::string_t& value)
{
    m_Mode = value;
    m_ModeIsSet = true;
}

bool V0_0_38_ping::modeIsSet() const
{
    return m_ModeIsSet;
}

void V0_0_38_ping::unsetMode()
{
    m_ModeIsSet = false;
}
int32_t V0_0_38_ping::getStatus() const
{
    return m_Status;
}

void V0_0_38_ping::setStatus(int32_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool V0_0_38_ping::statusIsSet() const
{
    return m_StatusIsSet;
}

void V0_0_38_ping::unsetStatus()
{
    m_StatusIsSet = false;
}
}
}
}
}


