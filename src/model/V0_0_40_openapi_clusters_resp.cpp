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



#include "slurmrestapi/model/V0_0_40_openapi_clusters_resp.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_openapi_clusters_resp::V0_0_40_openapi_clusters_resp()
{
    m_ClustersIsSet = false;
    m_MetaIsSet = false;
    m_ErrorsIsSet = false;
    m_WarningsIsSet = false;
}

V0_0_40_openapi_clusters_resp::~V0_0_40_openapi_clusters_resp()
{
}

void V0_0_40_openapi_clusters_resp::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_openapi_clusters_resp::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ClustersIsSet)
    {
        val[utility::conversions::to_string_t(U("clusters"))] = ModelBase::toJson(m_Clusters);
    }
    if(m_MetaIsSet)
    {
        val[utility::conversions::to_string_t(U("meta"))] = ModelBase::toJson(m_Meta);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_WarningsIsSet)
    {
        val[utility::conversions::to_string_t(U("warnings"))] = ModelBase::toJson(m_Warnings);
    }

    return val;
}

bool V0_0_40_openapi_clusters_resp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("clusters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("clusters")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_cluster_rec>> refVal_setClusters;
            ok &= ModelBase::fromJson(fieldValue, refVal_setClusters);
            setClusters(refVal_setClusters);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("meta"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("meta")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_openapi_meta> refVal_setMeta;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMeta);
            setMeta(refVal_setMeta);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_openapi_error>> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("warnings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("warnings")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_openapi_warning>> refVal_setWarnings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWarnings);
            setWarnings(refVal_setWarnings);
        }
    }
    return ok;
}

void V0_0_40_openapi_clusters_resp::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ClustersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("clusters")), m_Clusters));
    }
    if(m_MetaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("meta")), m_Meta));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
    if(m_WarningsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("warnings")), m_Warnings));
    }
}

bool V0_0_40_openapi_clusters_resp::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("clusters"))))
    {
        std::vector<std::shared_ptr<V0_0_40_cluster_rec>> refVal_setClusters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("clusters"))), refVal_setClusters );
        setClusters(refVal_setClusters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("meta"))))
    {
        std::shared_ptr<V0_0_40_openapi_meta> refVal_setMeta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("meta"))), refVal_setMeta );
        setMeta(refVal_setMeta);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<std::shared_ptr<V0_0_40_openapi_error>> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("warnings"))))
    {
        std::vector<std::shared_ptr<V0_0_40_openapi_warning>> refVal_setWarnings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("warnings"))), refVal_setWarnings );
        setWarnings(refVal_setWarnings);
    }
    return ok;
}

std::vector<std::shared_ptr<V0_0_40_cluster_rec>>& V0_0_40_openapi_clusters_resp::getClusters()
{
    return m_Clusters;
}

void V0_0_40_openapi_clusters_resp::setClusters(const std::vector<std::shared_ptr<V0_0_40_cluster_rec>>& value)
{
    m_Clusters = value;
    m_ClustersIsSet = true;
}

bool V0_0_40_openapi_clusters_resp::clustersIsSet() const
{
    return m_ClustersIsSet;
}

void V0_0_40_openapi_clusters_resp::unsetClusters()
{
    m_ClustersIsSet = false;
}
std::shared_ptr<V0_0_40_openapi_meta> V0_0_40_openapi_clusters_resp::getMeta() const
{
    return m_Meta;
}

void V0_0_40_openapi_clusters_resp::setMeta(const std::shared_ptr<V0_0_40_openapi_meta>& value)
{
    m_Meta = value;
    m_MetaIsSet = true;
}

bool V0_0_40_openapi_clusters_resp::metaIsSet() const
{
    return m_MetaIsSet;
}

void V0_0_40_openapi_clusters_resp::unsetMeta()
{
    m_MetaIsSet = false;
}
std::vector<std::shared_ptr<V0_0_40_openapi_error>>& V0_0_40_openapi_clusters_resp::getErrors()
{
    return m_Errors;
}

void V0_0_40_openapi_clusters_resp::setErrors(const std::vector<std::shared_ptr<V0_0_40_openapi_error>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool V0_0_40_openapi_clusters_resp::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void V0_0_40_openapi_clusters_resp::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_40_openapi_warning>>& V0_0_40_openapi_clusters_resp::getWarnings()
{
    return m_Warnings;
}

void V0_0_40_openapi_clusters_resp::setWarnings(const std::vector<std::shared_ptr<V0_0_40_openapi_warning>>& value)
{
    m_Warnings = value;
    m_WarningsIsSet = true;
}

bool V0_0_40_openapi_clusters_resp::warningsIsSet() const
{
    return m_WarningsIsSet;
}

void V0_0_40_openapi_clusters_resp::unsetWarnings()
{
    m_WarningsIsSet = false;
}
}
}
}
}


