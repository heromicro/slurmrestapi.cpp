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
 * Dbv0_0_38_job_array_limits_max_running.h
 *
 * Limits on array settings
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_array_limits_max_running_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_array_limits_max_running_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Limits on array settings
/// </summary>
class  Dbv0_0_38_job_array_limits_max_running
    : public ModelBase
{
public:
    Dbv0_0_38_job_array_limits_max_running();
    virtual ~Dbv0_0_38_job_array_limits_max_running();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_job_array_limits_max_running members

    /// <summary>
    /// Max running tasks in array at any one time
    /// </summary>
    int32_t getTasks() const;
    bool tasksIsSet() const;
    void unsetTasks();

    void setTasks(int32_t value);


protected:
    int32_t m_Tasks;
    bool m_TasksIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_array_limits_max_running_H_ */
