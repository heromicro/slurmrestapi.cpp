/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_41_openapi_ping_array_resp_pings_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_ping_array_resp_pings_inner::V0_0_41_openapi_ping_array_resp_pings_inner()
{
    m_Hostname = utility::conversions::to_string_t("");
    m_HostnameIsSet = false;
    m_Pinged = utility::conversions::to_string_t("");
    m_PingedIsSet = false;
    m_Latency = 0L;
    m_LatencyIsSet = false;
    m_Mode = utility::conversions::to_string_t("");
    m_ModeIsSet = false;
}

V0_0_41_openapi_ping_array_resp_pings_inner::~V0_0_41_openapi_ping_array_resp_pings_inner()
{
}

void V0_0_41_openapi_ping_array_resp_pings_inner::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_ping_array_resp_pings_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HostnameIsSet)
    {
        val[utility::conversions::to_string_t(U("hostname"))] = ModelBase::toJson(m_Hostname);
    }
    if(m_PingedIsSet)
    {
        val[utility::conversions::to_string_t(U("pinged"))] = ModelBase::toJson(m_Pinged);
    }
    if(m_LatencyIsSet)
    {
        val[utility::conversions::to_string_t(U("latency"))] = ModelBase::toJson(m_Latency);
    }
    if(m_ModeIsSet)
    {
        val[utility::conversions::to_string_t(U("mode"))] = ModelBase::toJson(m_Mode);
    }

    return val;
}

bool V0_0_41_openapi_ping_array_resp_pings_inner::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("pinged"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pinged")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPinged;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPinged);
            setPinged(refVal_setPinged);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("latency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("latency")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setLatency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLatency);
            setLatency(refVal_setLatency);
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
    return ok;
}

void V0_0_41_openapi_ping_array_resp_pings_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_PingedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pinged")), m_Pinged));
    }
    if(m_LatencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("latency")), m_Latency));
    }
    if(m_ModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mode")), m_Mode));
    }
}

bool V0_0_41_openapi_ping_array_resp_pings_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("pinged"))))
    {
        utility::string_t refVal_setPinged;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pinged"))), refVal_setPinged );
        setPinged(refVal_setPinged);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("latency"))))
    {
        int64_t refVal_setLatency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("latency"))), refVal_setLatency );
        setLatency(refVal_setLatency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("mode"))))
    {
        utility::string_t refVal_setMode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mode"))), refVal_setMode );
        setMode(refVal_setMode);
    }
    return ok;
}

utility::string_t V0_0_41_openapi_ping_array_resp_pings_inner::getHostname() const
{
    return m_Hostname;
}

void V0_0_41_openapi_ping_array_resp_pings_inner::setHostname(const utility::string_t& value)
{
    m_Hostname = value;
    m_HostnameIsSet = true;
}

bool V0_0_41_openapi_ping_array_resp_pings_inner::hostnameIsSet() const
{
    return m_HostnameIsSet;
}

void V0_0_41_openapi_ping_array_resp_pings_inner::unsetHostname()
{
    m_HostnameIsSet = false;
}
utility::string_t V0_0_41_openapi_ping_array_resp_pings_inner::getPinged() const
{
    return m_Pinged;
}

void V0_0_41_openapi_ping_array_resp_pings_inner::setPinged(const utility::string_t& value)
{
    m_Pinged = value;
    m_PingedIsSet = true;
}

bool V0_0_41_openapi_ping_array_resp_pings_inner::pingedIsSet() const
{
    return m_PingedIsSet;
}

void V0_0_41_openapi_ping_array_resp_pings_inner::unsetPinged()
{
    m_PingedIsSet = false;
}
int64_t V0_0_41_openapi_ping_array_resp_pings_inner::getLatency() const
{
    return m_Latency;
}

void V0_0_41_openapi_ping_array_resp_pings_inner::setLatency(int64_t value)
{
    m_Latency = value;
    m_LatencyIsSet = true;
}

bool V0_0_41_openapi_ping_array_resp_pings_inner::latencyIsSet() const
{
    return m_LatencyIsSet;
}

void V0_0_41_openapi_ping_array_resp_pings_inner::unsetLatency()
{
    m_LatencyIsSet = false;
}
utility::string_t V0_0_41_openapi_ping_array_resp_pings_inner::getMode() const
{
    return m_Mode;
}

void V0_0_41_openapi_ping_array_resp_pings_inner::setMode(const utility::string_t& value)
{
    m_Mode = value;
    m_ModeIsSet = true;
}

bool V0_0_41_openapi_ping_array_resp_pings_inner::modeIsSet() const
{
    return m_ModeIsSet;
}

void V0_0_41_openapi_ping_array_resp_pings_inner::unsetMode()
{
    m_ModeIsSet = false;
}
}
}
}
}


