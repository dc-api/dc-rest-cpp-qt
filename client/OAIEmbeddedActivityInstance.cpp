/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIEmbeddedActivityInstance.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIEmbeddedActivityInstance::OAIEmbeddedActivityInstance(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEmbeddedActivityInstance::OAIEmbeddedActivityInstance() {
    this->initializeModel();
}

OAIEmbeddedActivityInstance::~OAIEmbeddedActivityInstance() {}

void OAIEmbeddedActivityInstance::initializeModel() {

    m_application_id_isSet = false;
    m_application_id_isValid = false;

    m_instance_id_isSet = false;
    m_instance_id_isValid = false;

    m_launch_id_isSet = false;
    m_launch_id_isValid = false;

    m_users_isSet = false;
    m_users_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;
}

void OAIEmbeddedActivityInstance::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEmbeddedActivityInstance::fromJsonObject(QJsonObject json) {

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;

    m_instance_id_isValid = ::dc_rest::fromJsonValue(m_instance_id, json[QString("instance_id")]);
    m_instance_id_isSet = !json[QString("instance_id")].isNull() && m_instance_id_isValid;

    m_launch_id_isValid = ::dc_rest::fromJsonValue(m_launch_id, json[QString("launch_id")]);
    m_launch_id_isSet = !json[QString("launch_id")].isNull() && m_launch_id_isValid;

    m_users_isValid = ::dc_rest::fromJsonValue(m_users, json[QString("users")]);
    m_users_isSet = !json[QString("users")].isNull() && m_users_isValid;

    m_location_isValid = ::dc_rest::fromJsonValue(m_location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;
}

QString OAIEmbeddedActivityInstance::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEmbeddedActivityInstance::asJsonObject() const {
    QJsonObject obj;
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
    }
    if (m_instance_id_isSet) {
        obj.insert(QString("instance_id"), ::dc_rest::toJsonValue(m_instance_id));
    }
    if (m_launch_id_isSet) {
        obj.insert(QString("launch_id"), ::dc_rest::toJsonValue(m_launch_id));
    }
    if (m_users.size() > 0) {
        obj.insert(QString("users"), ::dc_rest::toJsonValue(m_users));
    }
    if (m_location.isSet()) {
        obj.insert(QString("location"), ::dc_rest::toJsonValue(m_location));
    }
    return obj;
}

QString OAIEmbeddedActivityInstance::getApplicationId() const {
    return m_application_id;
}
void OAIEmbeddedActivityInstance::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAIEmbeddedActivityInstance::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAIEmbeddedActivityInstance::is_application_id_Valid() const{
    return m_application_id_isValid;
}

QString OAIEmbeddedActivityInstance::getInstanceId() const {
    return m_instance_id;
}
void OAIEmbeddedActivityInstance::setInstanceId(const QString &instance_id) {
    m_instance_id = instance_id;
    m_instance_id_isSet = true;
}

bool OAIEmbeddedActivityInstance::is_instance_id_Set() const{
    return m_instance_id_isSet;
}

bool OAIEmbeddedActivityInstance::is_instance_id_Valid() const{
    return m_instance_id_isValid;
}

QString OAIEmbeddedActivityInstance::getLaunchId() const {
    return m_launch_id;
}
void OAIEmbeddedActivityInstance::setLaunchId(const QString &launch_id) {
    m_launch_id = launch_id;
    m_launch_id_isSet = true;
}

bool OAIEmbeddedActivityInstance::is_launch_id_Set() const{
    return m_launch_id_isSet;
}

bool OAIEmbeddedActivityInstance::is_launch_id_Valid() const{
    return m_launch_id_isValid;
}

QList<QString> OAIEmbeddedActivityInstance::getUsers() const {
    return m_users;
}
void OAIEmbeddedActivityInstance::setUsers(const QList<QString> &users) {
    m_users = users;
    m_users_isSet = true;
}

bool OAIEmbeddedActivityInstance::is_users_Set() const{
    return m_users_isSet;
}

bool OAIEmbeddedActivityInstance::is_users_Valid() const{
    return m_users_isValid;
}

OAIEmbeddedActivityInstance_location OAIEmbeddedActivityInstance::getLocation() const {
    return m_location;
}
void OAIEmbeddedActivityInstance::setLocation(const OAIEmbeddedActivityInstance_location &location) {
    m_location = location;
    m_location_isSet = true;
}

bool OAIEmbeddedActivityInstance::is_location_Set() const{
    return m_location_isSet;
}

bool OAIEmbeddedActivityInstance::is_location_Valid() const{
    return m_location_isValid;
}

bool OAIEmbeddedActivityInstance::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_application_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_instance_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_launch_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_users.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_location.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEmbeddedActivityInstance::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_application_id_isValid && m_instance_id_isValid && m_launch_id_isValid && m_users_isValid && true;
}

} // namespace dc_rest
