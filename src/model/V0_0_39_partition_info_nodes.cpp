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



#include "slurmrestapi/model/V0_0_39_partition_info_nodes.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_39_partition_info_nodes::V0_0_39_partition_info_nodes()
{
    m_Allowed_allocation = utility::conversions::to_string_t("");
    m_Allowed_allocationIsSet = false;
    m_Configured = utility::conversions::to_string_t("");
    m_ConfiguredIsSet = false;
    m_Total = 0;
    m_TotalIsSet = false;
}

V0_0_39_partition_info_nodes::~V0_0_39_partition_info_nodes()
{
}

void V0_0_39_partition_info_nodes::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_partition_info_nodes::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Allowed_allocationIsSet)
    {
        val[utility::conversions::to_string_t(U("allowed_allocation"))] = ModelBase::toJson(m_Allowed_allocation);
    }
    if(m_ConfiguredIsSet)
    {
        val[utility::conversions::to_string_t(U("configured"))] = ModelBase::toJson(m_Configured);
    }
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t(U("total"))] = ModelBase::toJson(m_Total);
    }

    return val;
}

bool V0_0_39_partition_info_nodes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("allowed_allocation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("allowed_allocation")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAllowedAllocation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllowedAllocation);
            setAllowedAllocation(refVal_setAllowedAllocation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("configured"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("configured")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setConfigured;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConfigured);
            setConfigured(refVal_setConfigured);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("total"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotal);
            setTotal(refVal_setTotal);
        }
    }
    return ok;
}

void V0_0_39_partition_info_nodes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Allowed_allocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("allowed_allocation")), m_Allowed_allocation));
    }
    if(m_ConfiguredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("configured")), m_Configured));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total")), m_Total));
    }
}

bool V0_0_39_partition_info_nodes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("allowed_allocation"))))
    {
        utility::string_t refVal_setAllowedAllocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("allowed_allocation"))), refVal_setAllowedAllocation );
        setAllowedAllocation(refVal_setAllowedAllocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("configured"))))
    {
        utility::string_t refVal_setConfigured;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("configured"))), refVal_setConfigured );
        setConfigured(refVal_setConfigured);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("total"))))
    {
        int32_t refVal_setTotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total"))), refVal_setTotal );
        setTotal(refVal_setTotal);
    }
    return ok;
}

utility::string_t V0_0_39_partition_info_nodes::getAllowedAllocation() const
{
    return m_Allowed_allocation;
}

void V0_0_39_partition_info_nodes::setAllowedAllocation(const utility::string_t& value)
{
    m_Allowed_allocation = value;
    m_Allowed_allocationIsSet = true;
}

bool V0_0_39_partition_info_nodes::allowedAllocationIsSet() const
{
    return m_Allowed_allocationIsSet;
}

void V0_0_39_partition_info_nodes::unsetAllowed_allocation()
{
    m_Allowed_allocationIsSet = false;
}
utility::string_t V0_0_39_partition_info_nodes::getConfigured() const
{
    return m_Configured;
}

void V0_0_39_partition_info_nodes::setConfigured(const utility::string_t& value)
{
    m_Configured = value;
    m_ConfiguredIsSet = true;
}

bool V0_0_39_partition_info_nodes::configuredIsSet() const
{
    return m_ConfiguredIsSet;
}

void V0_0_39_partition_info_nodes::unsetConfigured()
{
    m_ConfiguredIsSet = false;
}
int32_t V0_0_39_partition_info_nodes::getTotal() const
{
    return m_Total;
}

void V0_0_39_partition_info_nodes::setTotal(int32_t value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool V0_0_39_partition_info_nodes::totalIsSet() const
{
    return m_TotalIsSet;
}

void V0_0_39_partition_info_nodes::unsetTotal()
{
    m_TotalIsSet = false;
}
}
}
}
}


