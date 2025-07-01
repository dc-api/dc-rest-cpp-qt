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

#include "OAIUnfurledMediaResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIUnfurledMediaResponse::OAIUnfurledMediaResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUnfurledMediaResponse::OAIUnfurledMediaResponse() {
    this->initializeModel();
}

OAIUnfurledMediaResponse::~OAIUnfurledMediaResponse() {}

void OAIUnfurledMediaResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_proxy_url_isSet = false;
    m_proxy_url_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_content_type_isSet = false;
    m_content_type_isValid = false;

    m_attachment_id_isSet = false;
    m_attachment_id_isValid = false;
}

void OAIUnfurledMediaResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUnfurledMediaResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_url_isValid = ::dc_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_proxy_url_isValid = ::dc_rest::fromJsonValue(m_proxy_url, json[QString("proxy_url")]);
    m_proxy_url_isSet = !json[QString("proxy_url")].isNull() && m_proxy_url_isValid;

    m_width_isValid = ::dc_rest::fromJsonValue(m_width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::dc_rest::fromJsonValue(m_height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_content_type_isValid = ::dc_rest::fromJsonValue(m_content_type, json[QString("content_type")]);
    m_content_type_isSet = !json[QString("content_type")].isNull() && m_content_type_isValid;

    m_attachment_id_isValid = ::dc_rest::fromJsonValue(m_attachment_id, json[QString("attachment_id")]);
    m_attachment_id_isSet = !json[QString("attachment_id")].isNull() && m_attachment_id_isValid;
}

QString OAIUnfurledMediaResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUnfurledMediaResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::dc_rest::toJsonValue(m_url));
    }
    if (m_proxy_url_isSet) {
        obj.insert(QString("proxy_url"), ::dc_rest::toJsonValue(m_proxy_url));
    }
    if (m_width_isSet) {
        obj.insert(QString("width"), ::dc_rest::toJsonValue(m_width));
    }
    if (m_height_isSet) {
        obj.insert(QString("height"), ::dc_rest::toJsonValue(m_height));
    }
    if (m_content_type_isSet) {
        obj.insert(QString("content_type"), ::dc_rest::toJsonValue(m_content_type));
    }
    if (m_attachment_id_isSet) {
        obj.insert(QString("attachment_id"), ::dc_rest::toJsonValue(m_attachment_id));
    }
    return obj;
}

QString OAIUnfurledMediaResponse::getId() const {
    return m_id;
}
void OAIUnfurledMediaResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIUnfurledMediaResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIUnfurledMediaResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIUnfurledMediaResponse::getUrl() const {
    return m_url;
}
void OAIUnfurledMediaResponse::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIUnfurledMediaResponse::is_url_Set() const{
    return m_url_isSet;
}

bool OAIUnfurledMediaResponse::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIUnfurledMediaResponse::getProxyUrl() const {
    return m_proxy_url;
}
void OAIUnfurledMediaResponse::setProxyUrl(const QString &proxy_url) {
    m_proxy_url = proxy_url;
    m_proxy_url_isSet = true;
}

bool OAIUnfurledMediaResponse::is_proxy_url_Set() const{
    return m_proxy_url_isSet;
}

bool OAIUnfurledMediaResponse::is_proxy_url_Valid() const{
    return m_proxy_url_isValid;
}

qint32 OAIUnfurledMediaResponse::getWidth() const {
    return m_width;
}
void OAIUnfurledMediaResponse::setWidth(const qint32 &width) {
    m_width = width;
    m_width_isSet = true;
}

bool OAIUnfurledMediaResponse::is_width_Set() const{
    return m_width_isSet;
}

bool OAIUnfurledMediaResponse::is_width_Valid() const{
    return m_width_isValid;
}

qint32 OAIUnfurledMediaResponse::getHeight() const {
    return m_height;
}
void OAIUnfurledMediaResponse::setHeight(const qint32 &height) {
    m_height = height;
    m_height_isSet = true;
}

bool OAIUnfurledMediaResponse::is_height_Set() const{
    return m_height_isSet;
}

bool OAIUnfurledMediaResponse::is_height_Valid() const{
    return m_height_isValid;
}

QString OAIUnfurledMediaResponse::getContentType() const {
    return m_content_type;
}
void OAIUnfurledMediaResponse::setContentType(const QString &content_type) {
    m_content_type = content_type;
    m_content_type_isSet = true;
}

bool OAIUnfurledMediaResponse::is_content_type_Set() const{
    return m_content_type_isSet;
}

bool OAIUnfurledMediaResponse::is_content_type_Valid() const{
    return m_content_type_isValid;
}

QString OAIUnfurledMediaResponse::getAttachmentId() const {
    return m_attachment_id;
}
void OAIUnfurledMediaResponse::setAttachmentId(const QString &attachment_id) {
    m_attachment_id = attachment_id;
    m_attachment_id_isSet = true;
}

bool OAIUnfurledMediaResponse::is_attachment_id_Set() const{
    return m_attachment_id_isSet;
}

bool OAIUnfurledMediaResponse::is_attachment_id_Valid() const{
    return m_attachment_id_isValid;
}

bool OAIUnfurledMediaResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_proxy_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_content_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_attachment_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUnfurledMediaResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_url_isValid && m_proxy_url_isValid && true;
}

} // namespace dc_rest
