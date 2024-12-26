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
 * V0_0_39_qos_limits_max_tres_per.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_qos_limits_max_tres_per_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_qos_limits_max_tres_per_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_tres.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_39_tres;


/// <summary>
/// 
/// </summary>
class  V0_0_39_qos_limits_max_tres_per
    : public ModelBase
{
public:
    V0_0_39_qos_limits_max_tres_per();
    virtual ~V0_0_39_qos_limits_max_tres_per();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_qos_limits_max_tres_per members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_39_tres>>& getAccount();
    bool accountIsSet() const;
    void unsetAccount();

    void setAccount(const std::vector<std::shared_ptr<V0_0_39_tres>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_39_tres>>& getJob();
    bool jobIsSet() const;
    void unsetJob();

    void setJob(const std::vector<std::shared_ptr<V0_0_39_tres>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_39_tres>>& getNode();
    bool nodeIsSet() const;
    void unsetNode();

    void setNode(const std::vector<std::shared_ptr<V0_0_39_tres>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_39_tres>>& getUser();
    bool userIsSet() const;
    void unsetUser();

    void setUser(const std::vector<std::shared_ptr<V0_0_39_tres>>& value);


protected:
    std::vector<std::shared_ptr<V0_0_39_tres>> m_Account;
    bool m_AccountIsSet;
    std::vector<std::shared_ptr<V0_0_39_tres>> m_Job;
    bool m_JobIsSet;
    std::vector<std::shared_ptr<V0_0_39_tres>> m_Node;
    bool m_NodeIsSet;
    std::vector<std::shared_ptr<V0_0_39_tres>> m_User;
    bool m_UserIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_qos_limits_max_tres_per_H_ */