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

/*
 * Dbv0_0_38_diag_statistics_users_inner.h
 *
 * Statistics by user RPCs
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_diag_statistics_users_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_diag_statistics_users_inner_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_38_diag_statistics_users_inner_time.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_38_diag_statistics_users_inner_time;

/// <summary>
/// Statistics by user RPCs
/// </summary>
class  Dbv0_0_38_diag_statistics_users_inner
    : public ModelBase
{
public:
    Dbv0_0_38_diag_statistics_users_inner();
    virtual ~Dbv0_0_38_diag_statistics_users_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_diag_statistics_users_inner members

    /// <summary>
    /// User name
    /// </summary>
    utility::string_t getUser() const;
    bool userIsSet() const;
    void unsetUser();

    void setUser(const utility::string_t& value);

    /// <summary>
    /// Number of RPCs
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_38_diag_statistics_users_inner_time> getTime() const;
    bool timeIsSet() const;
    void unsetTime();

    void setTime(const std::shared_ptr<Dbv0_0_38_diag_statistics_users_inner_time>& value);


protected:
    utility::string_t m_User;
    bool m_UserIsSet;
    int32_t m_Count;
    bool m_CountIsSet;
    std::shared_ptr<Dbv0_0_38_diag_statistics_users_inner_time> m_Time;
    bool m_TimeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_diag_statistics_users_inner_H_ */
