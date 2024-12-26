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

/*
 * V0_0_39_partition_info_qos.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_partition_info_qos_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_partition_info_qos_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_39_partition_info_qos
    : public ModelBase
{
public:
    V0_0_39_partition_info_qos();
    virtual ~V0_0_39_partition_info_qos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_partition_info_qos members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAllowed() const;
    bool allowedIsSet() const;
    void unsetAllowed();

    void setAllowed(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDeny() const;
    bool denyIsSet() const;
    void unsetDeny();

    void setDeny(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAssigned() const;
    bool assignedIsSet() const;
    void unsetAssigned();

    void setAssigned(const utility::string_t& value);


protected:
    utility::string_t m_Allowed;
    bool m_AllowedIsSet;
    utility::string_t m_Deny;
    bool m_DenyIsSet;
    utility::string_t m_Assigned;
    bool m_AssignedIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_partition_info_qos_H_ */
