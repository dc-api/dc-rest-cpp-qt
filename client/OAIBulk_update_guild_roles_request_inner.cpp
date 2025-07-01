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

#include "OAIBulk_update_guild_roles_request_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIBulk_update_guild_roles_request_inner::OAIBulk_update_guild_roles_request_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBulk_update_guild_roles_request_inner::OAIBulk_update_guild_roles_request_inner() {
    this->initializeModel();
}

OAIBulk_update_guild_roles_request_inner::~OAIBulk_update_guild_roles_request_inner() {}

void OAIBulk_update_guild_roles_request_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_position_isSet = false;
    m_position_isValid = false;
}

void OAIBulk_update_guild_roles_request_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBulk_update_guild_roles_request_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_position_isValid = ::dc_rest::fromJsonValue(m_position, json[QString("position")]);
    m_position_isSet = !json[QString("position")].isNull() && m_position_isValid;
}

QString OAIBulk_update_guild_roles_request_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBulk_update_guild_roles_request_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_position_isSet) {
        obj.insert(QString("position"), ::dc_rest::toJsonValue(m_position));
    }
    return obj;
}

QString OAIBulk_update_guild_roles_request_inner::getId() const {
    return m_id;
}
void OAIBulk_update_guild_roles_request_inner::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIBulk_update_guild_roles_request_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAIBulk_update_guild_roles_request_inner::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAIBulk_update_guild_roles_request_inner::getPosition() const {
    return m_position;
}
void OAIBulk_update_guild_roles_request_inner::setPosition(const qint32 &position) {
    m_position = position;
    m_position_isSet = true;
}

bool OAIBulk_update_guild_roles_request_inner::is_position_Set() const{
    return m_position_isSet;
}

bool OAIBulk_update_guild_roles_request_inner::is_position_Valid() const{
    return m_position_isValid;
}

bool OAIBulk_update_guild_roles_request_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_position_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBulk_update_guild_roles_request_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
