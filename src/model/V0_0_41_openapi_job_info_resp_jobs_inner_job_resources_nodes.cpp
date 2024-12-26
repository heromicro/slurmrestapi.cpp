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



#include "slurmrestapi/model/V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes()
{
    m_Count = 0;
    m_CountIsSet = false;
    m_Select_typeIsSet = false;
    m_List = utility::conversions::to_string_t("");
    m_ListIsSet = false;
    m_Whole = false;
    m_WholeIsSet = false;
    m_AllocationIsSet = false;
}

V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::~V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes()
{
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t(U("count"))] = ModelBase::toJson(m_Count);
    }
    if(m_Select_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("select_type"))] = ModelBase::toJson(m_Select_type);
    }
    if(m_ListIsSet)
    {
        val[utility::conversions::to_string_t(U("list"))] = ModelBase::toJson(m_List);
    }
    if(m_WholeIsSet)
    {
        val[utility::conversions::to_string_t(U("whole"))] = ModelBase::toJson(m_Whole);
    }
    if(m_AllocationIsSet)
    {
        val[utility::conversions::to_string_t(U("allocation"))] = ModelBase::toJson(m_Allocation);
    }

    return val;
}

bool V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("count")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCount);
            setCount(refVal_setCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("select_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("select_type")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setSelectType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSelectType);
            setSelectType(refVal_setSelectType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("list"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("list")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setList);
            setList(refVal_setList);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("whole"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("whole")));
        if(!fieldValue.is_null())
        {
            bool refVal_setWhole;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWhole);
            setWhole(refVal_setWhole);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("allocation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("allocation")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner>> refVal_setAllocation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllocation);
            setAllocation(refVal_setAllocation);
        }
    }
    return ok;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("count")), m_Count));
    }
    if(m_Select_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("select_type")), m_Select_type));
    }
    if(m_ListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("list")), m_List));
    }
    if(m_WholeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("whole")), m_Whole));
    }
    if(m_AllocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("allocation")), m_Allocation));
    }
}

bool V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("count"))))
    {
        int32_t refVal_setCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("count"))), refVal_setCount );
        setCount(refVal_setCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("select_type"))))
    {
        std::vector<utility::string_t> refVal_setSelectType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("select_type"))), refVal_setSelectType );
        setSelectType(refVal_setSelectType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("list"))))
    {
        utility::string_t refVal_setList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("list"))), refVal_setList );
        setList(refVal_setList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("whole"))))
    {
        bool refVal_setWhole;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("whole"))), refVal_setWhole );
        setWhole(refVal_setWhole);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("allocation"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner>> refVal_setAllocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("allocation"))), refVal_setAllocation );
        setAllocation(refVal_setAllocation);
    }
    return ok;
}

int32_t V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::getCount() const
{
    return m_Count;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setCount(int32_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}

bool V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::countIsSet() const
{
    return m_CountIsSet;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::unsetCount()
{
    m_CountIsSet = false;
}
std::vector<utility::string_t>& V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::getSelectType()
{
    return m_Select_type;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setSelectType(const std::vector<utility::string_t>& value)
{
    m_Select_type = value;
    m_Select_typeIsSet = true;
}

bool V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::selectTypeIsSet() const
{
    return m_Select_typeIsSet;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::unsetSelect_type()
{
    m_Select_typeIsSet = false;
}
utility::string_t V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::getList() const
{
    return m_List;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setList(const utility::string_t& value)
{
    m_List = value;
    m_ListIsSet = true;
}

bool V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::listIsSet() const
{
    return m_ListIsSet;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::unsetList()
{
    m_ListIsSet = false;
}
bool V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::isWhole() const
{
    return m_Whole;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setWhole(bool value)
{
    m_Whole = value;
    m_WholeIsSet = true;
}

bool V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::wholeIsSet() const
{
    return m_WholeIsSet;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::unsetWhole()
{
    m_WholeIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner>>& V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::getAllocation()
{
    return m_Allocation;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setAllocation(const std::vector<std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner>>& value)
{
    m_Allocation = value;
    m_AllocationIsSet = true;
}

bool V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::allocationIsSet() const
{
    return m_AllocationIsSet;
}

void V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::unsetAllocation()
{
    m_AllocationIsSet = false;
}
}
}
}
}


